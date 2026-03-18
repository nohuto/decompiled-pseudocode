/*
 * XREFs of ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C0284D28
 * Callers:
 *     UMPDOBJ_bCleanupWrap @ 0x1C0285570 (UMPDOBJ_bCleanupWrap.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C02AB0F4 (--1UMPDREF@@QEAA@XZ.c)
 * Callees:
 *     DereferenceW32Process @ 0x1C0104BA0 (DereferenceW32Process.c)
 *     EngDeletePath @ 0x1C02798F0 (EngDeletePath.c)
 *     ?psoDest@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z @ 0x1C0285210 (-psoDest@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z.c)
 *     ?psoMask@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z @ 0x1C0285224 (-psoMask@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z.c)
 *     ?psoSrc@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z @ 0x1C0285238 (-psoSrc@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z.c)
 *     ?vClient@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C0285444 (-vClient@UMPDOBJ@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall UMPDOBJ::bCleanupWorker(UMPDOBJ *this)
{
  __int64 result; // rax
  PATHOBJ *v3; // rcx
  void *v4; // rdx
  void *v5; // rdx
  void *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // [rsp+20h] [rbp-18h]
  struct _SURFOBJ *v10; // [rsp+40h] [rbp+8h] BYREF

  v9 = 17;
  result = HmgRemoveObject(*(_QWORD *)this, 0LL, 0LL, 1LL, v9, 0LL);
  if ( result )
  {
    v3 = (PATHOBJ *)*((_QWORD *)this + 30);
    if ( v3 )
      EngDeletePath(v3);
    if ( *((_DWORD *)this + 109) )
    {
      v10 = 0LL;
      v4 = (void *)*((_QWORD *)this + 8);
      if ( v4 )
      {
        UMPDOBJ::vClient((UMPDOBJ *)v3, v4);
        UMPDOBJ::psoDest(this, &v10, 0);
      }
      v5 = (void *)*((_QWORD *)this + 10);
      if ( v5 )
      {
        UMPDOBJ::vClient((UMPDOBJ *)v3, v5);
        UMPDOBJ::psoSrc(this, &v10, 0);
      }
      v6 = (void *)*((_QWORD *)this + 12);
      if ( v6 )
      {
        UMPDOBJ::vClient((UMPDOBJ *)v3, v6);
        UMPDOBJ::psoMask(this, &v10, 0);
      }
    }
    v7 = *((_QWORD *)this + 45);
    if ( v7 )
    {
      MmUnmapViewOfSection(**((_QWORD **)this + 48), v7);
      DereferenceW32Process(*((_QWORD *)this + 48));
    }
    v8 = *((_QWORD *)this + 53);
    if ( v8 )
      Win32FreePool(v8, v7);
    return 1LL;
  }
  return result;
}
