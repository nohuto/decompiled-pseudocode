/*
 * XREFs of ObCaptureObjectStateForDuplication @ 0x14047D164
 * Callers:
 *     AlpcpCaptureHandleAttributeInternal @ 0x14047D050 (AlpcpCaptureHandleAttributeInternal.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ObpIncrementHandleCountEx @ 0x14040BFB0 (ObpIncrementHandleCountEx.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140424D60 (ObpReferenceProcessObjectByHandle.c)
 *     RtlMapGenericMask @ 0x140472860 (RtlMapGenericMask.c)
 *     ObReferenceProcessHandleTable @ 0x14047D304 (ObReferenceProcessHandleTable.c)
 */

__int64 __fastcall ObCaptureObjectStateForDuplication(
        ULONG_PTR Object,
        unsigned __int64 a2,
        ACCESS_MASK a3,
        char a4,
        char a5,
        __int64 a6)
{
  ACCESS_MASK v7; // r15d
  int v10; // esi
  __int64 v11; // rax
  int v12; // ebx
  int v13; // eax
  ACCESS_MASK v14; // r12d
  int v15; // ebx
  char *v16; // r14
  __int64 v17; // rsi
  __int64 v18; // r13
  int v19; // r15d
  int v21; // [rsp+40h] [rbp-20h] BYREF
  int v22; // [rsp+48h] [rbp-18h] BYREF
  ACCESS_MASK v23; // [rsp+4Ch] [rbp-14h]
  PVOID Objecta; // [rsp+50h] [rbp-10h] BYREF
  ACCESS_MASK AccessMask; // [rsp+B0h] [rbp+50h] BYREF
  int v27; // [rsp+B8h] [rbp+58h] BYREF

  v27 = 0;
  v7 = a3;
  v10 = a4 & 2;
  if ( (a4 & 2) == 0 && (a3 & 0xCE00000) != 0 )
    return 3221225506LL;
  v11 = ObReferenceProcessHandleTable(Object);
  if ( !v11 )
    return 3221225738LL;
  v12 = ObpReferenceProcessObjectByHandle(
          a2,
          (struct _KTHREAD *)Object,
          v11,
          a5,
          1967415887,
          (struct _KTHREAD **)&Objecta,
          &v22,
          &v27);
  if ( v12 < 0 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(Object + 736));
    return (unsigned int)v12;
  }
  if ( (v22 & 4) != 0 )
    v13 = 0;
  else
    v13 = v27;
  v14 = v23;
  if ( v10 )
    v7 = v23;
  v15 = v22 & 0xC;
  AccessMask = v7;
  if ( (a4 & 8) != 0 )
    v15 = v22 & 4 | 8;
  v16 = (char *)Objecta;
  v17 = a6;
  *(_DWORD *)(a6 + 28) = v13;
  v18 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v16 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v16 - 48) >> 8)];
  if ( (v7 & 0xF0000000) != 0 )
  {
    RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(v18 + 76));
    v7 = AccessMask;
  }
  v21 = v7 & (*(_DWORD *)(v18 + 92) | 0x1000000);
  if ( (~v14 & v21) != 0 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(Object + 736));
    ObfDereferenceObjectWithTag(v16, 0x7544624Fu);
    return 3221225506LL;
  }
  v19 = ObpIncrementHandleCountEx(2u, (__int64)&v21, Object, (__int64)v16, a5, v15, 0LL);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(Object + 736));
  if ( v19 < 0 )
  {
    ObfDereferenceObjectWithTag(v16, 0x7544624Fu);
  }
  else
  {
    *(_DWORD *)(v17 + 24) = v21;
    *(_QWORD *)(v17 + 8) = a2;
    *(_DWORD *)(v17 + 32) = v15;
    ObfReferenceObjectWithTag((PVOID)Object, 0x7544624Fu);
    *(_QWORD *)v17 = Object;
    *(_QWORD *)(v17 + 16) = v16;
  }
  return (unsigned int)v19;
}
