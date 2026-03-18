/*
 * XREFs of ?RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z @ 0x1C00232E8
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@MEAAJXZ @ 0x1C002FB70 (-Initialize@CApplicationChannel@DirectComposition@@MEAAJXZ.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0021C34 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?InsertObject@CLinearHandleTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x1C0031290 (-InsertObject@CLinearHandleTableBase@DirectComposition@@QEAAJPEAXPEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::RegisterChannel(
        struct _ERESOURCE **this,
        struct DirectComposition::CChannel *a2,
        unsigned int *a3)
{
  int inserted; // eax
  unsigned int v7; // esi
  int v8; // ebx
  bool v9; // zf
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

  DirectComposition::CCriticalSection::AcquireExclusive(this[2]);
  inserted = DirectComposition::CLinearHandleTableBase::InsertObject(
               (DirectComposition::CLinearHandleTableBase *)(this + 3),
               a2,
               &v11);
  v7 = v11;
  v8 = inserted;
  if ( inserted >= 0 )
    v7 = v11;
  ExReleaseResourceLite(this[2]);
  KeLeaveCriticalRegion();
  if ( v8 >= 0 )
  {
    v9 = *((_DWORD *)this + 37) == 0;
    *a3 = v7;
    if ( v9 )
      return (unsigned int)-1073741300;
  }
  return (unsigned int)v8;
}
