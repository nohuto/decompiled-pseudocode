/*
 * XREFs of ?RemoveAdapter@DXGADAPTERSOURCEHASH@@QEAAXPEAU_LUID@@@Z @ 0x1C01466B0
 * Callers:
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01290DC (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x1C00BC03C (-GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ.c)
 */

void __fastcall DXGADAPTERSOURCEHASH::RemoveAdapter(DXGADAPTERSOURCEHASH *this, struct _LUID *a2)
{
  unsigned int ActualBufferSize; // eax
  _DWORD *v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // rdx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  ActualBufferSize = AUTOEXPANDALLOCATION::GetActualBufferSize((DXGADAPTERSOURCEHASH *)((char *)this + 64));
  v5 = (_DWORD *)*((_QWORD *)this + 8);
  v6 = ActualBufferSize >> 4;
  if ( v6 > 1 << *((_DWORD *)this + 21) )
    v6 = 1 << *((_DWORD *)this + 21);
  if ( v6 )
  {
    v7 = v6;
    do
    {
      if ( *v5 == a2->LowPart && v5[1] == a2->HighPart )
        v5[3] &= ~1u;
      v5 += 4;
      --v7;
    }
    while ( v7 );
  }
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
}
