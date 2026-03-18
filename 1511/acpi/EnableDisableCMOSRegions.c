/*
 * XREFs of EnableDisableCMOSRegions @ 0x1C0007690
 * Callers:
 *     ACPITableLoad @ 0x1C0006C60 (ACPITableLoad.c)
 *     EnableDisableCMOSRegions @ 0x1C0007690 (EnableDisableCMOSRegions.c)
 * Callees:
 *     EnableDisableCMOSRegions @ 0x1C0007690 (EnableDisableCMOSRegions.c)
 *     AMLIGetFirstChild @ 0x1C00077C8 (AMLIGetFirstChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 *     AMLIIsNamedChildPresent @ 0x1C000DC00 (AMLIIsNamedChildPresent.c)
 *     DereferenceObjectEx @ 0x1C00138E4 (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C00144F8 (HeapFree.c)
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall EnableDisableCMOSRegions(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // si
  __int64 v3; // rbx
  unsigned int v4; // ebp
  volatile signed __int32 *Child; // rdi
  int v6; // eax
  KIRQL v7; // dl
  __int64 v8; // rax
  __int64 v9; // rbx
  volatile signed __int32 *v10; // rbx
  bool v11; // zf
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // esi
  __int64 v17; // rcx
  _QWORD v18[13]; // [rsp+30h] [rbp-68h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = 0;
  Child = (volatile signed __int32 *)AMLIGetFirstChild();
  if ( Child )
  {
    do
    {
      v6 = *(unsigned __int16 *)(*(_QWORD *)Child + 58LL);
      if ( v6 == 6 )
      {
        v13 = EnableDisableCMOSRegions(Child, v2);
        if ( v13 < 0 )
          v4 = v13;
      }
      else if ( v6 == 10 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)Child + 88LL);
        if ( v14 )
        {
          if ( *(_BYTE *)(v14 + 12) == 5 )
          {
            if ( (unsigned __int8)AMLIIsNamedChildPresent(v3, 1145653343LL) )
            {
              v15 = AMLIGetNamedChild(v3, 1195725407LL);
              if ( v15 )
              {
                memset(v18, 0, 0x50uLL);
                v18[2] = 5LL;
                WORD1(v18[0]) = 1;
                WORD1(v18[5]) = 1;
                v18[7] = v2;
                v16 = AMLIAsyncEvalObject(v15, 0LL, 2LL, v18, 0LL, 0LL);
                AMLIDereferenceHandleEx(v15);
                if ( v16 < 0 )
                  v4 = v16;
                v2 = a2;
              }
            }
          }
        }
      }
      v7 = ExAcquireSpinLockShared(&ACPINamespaceLock);
      v8 = *(_QWORD *)(*(_QWORD *)Child + 16LL);
      if ( !v8 || (v9 = *(_QWORD *)(*(_QWORD *)Child + 8LL), v9 == *(_QWORD *)(v8 + 24)) )
      {
        v10 = 0LL;
      }
      else
      {
        v10 = (volatile signed __int32 *)(v9 + 112);
        dword_1C005A228 = 0;
        byte_1C005A22C = 0;
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement(v10 + 2);
      }
      ExReleaseSpinLockShared(&ACPINamespaceLock, v7);
      dword_1C005A228 = 0;
      byte_1C005A22C = 0;
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd(Child + 2, 0xFFFFFFFF) == 1 )
      {
        v17 = *(_QWORD *)Child;
        if ( Child == (volatile signed __int32 *)(*(_QWORD *)Child + 112LL) )
        {
          DereferenceObjectEx(v17);
        }
        else
        {
          DereferenceObjectEx(v17);
          HeapFree(Child);
        }
      }
      Child = v10;
      v11 = v10 == 0LL;
      v3 = a1;
    }
    while ( !v11 );
  }
  return v4;
}
