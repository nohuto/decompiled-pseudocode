/*
 * XREFs of ObCaptureObjectStateForDuplication @ 0x14053B60C
 * Callers:
 *     AlpcpCaptureHandleAttributeInternal @ 0x14053B4E4 (AlpcpCaptureHandleAttributeInternal.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceProcessHandleTable @ 0x1404249F8 (ObReferenceProcessHandleTable.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140424A60 (ObpReferenceProcessObjectByHandle.c)
 *     RtlMapGenericMask @ 0x140435530 (RtlMapGenericMask.c)
 *     ObpIncrementHandleCountEx @ 0x1404952B0 (ObpIncrementHandleCountEx.c)
 */

__int64 __fastcall ObCaptureObjectStateForDuplication(
        struct _EX_RUNDOWN_REF *Object,
        unsigned __int64 a2,
        ACCESS_MASK a3,
        char a4,
        char a5,
        __int64 a6)
{
  ACCESS_MASK v7; // esi
  int v10; // r14d
  ULONG_PTR v11; // rax
  int v12; // ebx
  int v13; // eax
  ACCESS_MASK v14; // r15d
  int v15; // ebx
  char *v16; // r12
  __int64 v17; // r14
  __int64 v18; // r13
  int v19; // esi
  unsigned __int64 v20; // rtt
  unsigned __int64 v22; // rtt
  unsigned __int64 v23; // rtt
  int v24; // [rsp+40h] [rbp-20h] BYREF
  PVOID Objecta; // [rsp+48h] [rbp-18h] BYREF
  int v26; // [rsp+50h] [rbp-10h] BYREF
  ACCESS_MASK v27; // [rsp+54h] [rbp-Ch]
  ACCESS_MASK AccessMask; // [rsp+B0h] [rbp+50h] BYREF
  int v30; // [rsp+B8h] [rbp+58h] BYREF

  AccessMask = a3;
  v30 = 0;
  v7 = a3;
  v10 = a4 & 2;
  if ( (a4 & 2) == 0 && (a3 & 0xCE00000) != 0 )
    return 3221225506LL;
  v11 = ObReferenceProcessHandleTable(Object);
  if ( !v11 )
    return 3221225738LL;
  v12 = ObpReferenceProcessObjectByHandle(a2, (ULONG_PTR)Object, v11, a5, 1967415887, &Objecta, &v26, &v30);
  if ( v12 >= 0 )
  {
    if ( (v26 & 4) != 0 )
    {
      v13 = 0;
      v30 = 0;
    }
    else
    {
      v13 = v30;
    }
    v14 = v27;
    if ( v10 )
      v7 = v27;
    v15 = v26 & 0xC;
    AccessMask = v7;
    if ( (a4 & 8) != 0 )
      v15 = v26 & 4 | 8;
    v16 = (char *)Objecta;
    v17 = a6;
    *(_DWORD *)(a6 + 28) = v13;
    v18 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v16 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v16 - 48) >> 8)];
    if ( (v7 & 0xF0000000) != 0 )
    {
      RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(v18 + 76));
      v7 = AccessMask;
    }
    v24 = v7 & (*(_DWORD *)(v18 + 92) | 0x1000000);
    if ( (~v14 & v24) == 0 )
    {
      v19 = ObpIncrementHandleCountEx(2u, (__int64)&v24, (ULONG_PTR)Object, (__int64)v16, a5, v15, 0LL);
      _m_prefetchw(&Object[92]);
      v20 = Object[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v20 != _InterlockedCompareExchange64((volatile signed __int64 *)&Object[92], v20 - 2, v20) )
        ExfReleaseRundownProtection(Object + 92);
      if ( v19 < 0 )
      {
        ObfDereferenceObjectWithTag(Objecta, 0x7544624Fu);
      }
      else
      {
        *(_QWORD *)(v17 + 8) = a2;
        *(_DWORD *)(v17 + 24) = v24;
        *(_DWORD *)(v17 + 32) = v15;
        ObfReferenceObjectWithTag(Object, 0x7544624Fu);
        *(_QWORD *)(v17 + 16) = Objecta;
        *(_QWORD *)v17 = Object;
      }
      return (unsigned int)v19;
    }
    _m_prefetchw(&Object[92]);
    v23 = Object[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v23 != _InterlockedCompareExchange64((volatile signed __int64 *)&Object[92], v23 - 2, v23) )
      ExfReleaseRundownProtection(Object + 92);
    ObfDereferenceObjectWithTag(Objecta, 0x7544624Fu);
    return 3221225506LL;
  }
  _m_prefetchw(&Object[92]);
  v22 = Object[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v22 != _InterlockedCompareExchange64((volatile signed __int64 *)&Object[92], v22 - 2, v22) )
    ExfReleaseRundownProtection(Object + 92);
  return (unsigned int)v12;
}
