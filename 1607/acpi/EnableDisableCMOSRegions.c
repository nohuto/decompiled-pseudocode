/*
 * XREFs of EnableDisableCMOSRegions @ 0x1C0006EB0
 * Callers:
 *     ACPITableLoad @ 0x1C00064E0 (ACPITableLoad.c)
 *     EnableDisableCMOSRegions @ 0x1C0006EB0 (EnableDisableCMOSRegions.c)
 * Callees:
 *     EnableDisableCMOSRegions @ 0x1C0006EB0 (EnableDisableCMOSRegions.c)
 *     AMLIGetFirstChild @ 0x1C0006FE8 (AMLIGetFirstChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     AMLIIsNamedChildPresent @ 0x1C0013F30 (AMLIIsNamedChildPresent.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     FreeObjectHandle @ 0x1C005CBAC (FreeObjectHandle.c)
 */

__int64 __fastcall EnableDisableCMOSRegions(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // si
  __int64 v3; // rbx
  unsigned int v4; // ebp
  __int64 Child; // rdi
  int v6; // eax
  KIRQL v7; // dl
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rbx
  bool v11; // zf
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // esi
  _QWORD v17[13]; // [rsp+30h] [rbp-68h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = 0;
  Child = AMLIGetFirstChild();
  if ( Child )
  {
    do
    {
      v6 = *(unsigned __int16 *)(*(_QWORD *)Child + 66LL);
      if ( v6 == 6 )
      {
        v13 = EnableDisableCMOSRegions(Child, v2);
        if ( v13 < 0 )
          v4 = v13;
      }
      else if ( v6 == 10 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)Child + 96LL);
        if ( v14 )
        {
          if ( *(_BYTE *)(v14 + 12) == 5 )
          {
            if ( (unsigned __int8)AMLIIsNamedChildPresent(v3, 1145653343LL) )
            {
              v15 = AMLIGetNamedChild(v3, 1195725407LL);
              if ( v15 )
              {
                memset(v17, 0, 0x50uLL);
                v17[2] = 5LL;
                WORD1(v17[0]) = 1;
                WORD1(v17[5]) = 1;
                v17[7] = v2;
                v16 = AMLIAsyncEvalObject(v15, 0LL, 2LL, v17, 0LL, 0LL);
                AMLIDereferenceHandleEx(v15, 0LL);
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
      if ( !v8 || (v9 = **(_QWORD **)Child, v9 == v8 + 24) )
      {
        v10 = 0LL;
      }
      else
      {
        v10 = v9 + 120;
        dword_1C0074698 = 0;
        byte_1C007469C = 0;
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      }
      ExReleaseSpinLockShared(&ACPINamespaceLock, v7);
      dword_1C0074698 = 0;
      byte_1C007469C = 0;
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(Child + 8), 0xFFFFFFFF) == 1 )
        FreeObjectHandle(Child);
      Child = v10;
      v11 = v10 == 0;
      v3 = a1;
    }
    while ( !v11 );
  }
  return v4;
}
