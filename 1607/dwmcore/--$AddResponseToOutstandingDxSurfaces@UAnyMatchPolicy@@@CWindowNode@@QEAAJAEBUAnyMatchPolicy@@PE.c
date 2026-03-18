/*
 * XREFs of ??$AddResponseToOutstandingDxSurfaces@UAnyMatchPolicy@@@CWindowNode@@QEAAJAEBUAnyMatchPolicy@@PEAVCResponseItem@@@Z @ 0x1801200FC
 * Callers:
 *     ?AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z @ 0x180009D28 (-AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CWindowNode::AddResponseToOutstandingDxSurfaces<AnyMatchPolicy>(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  struct _RTL_GENERIC_TABLE *v4; // r15
  unsigned int v5; // r14d
  unsigned int v6; // ebp
  __int64 v7; // rsi
  __int64 v8; // r10
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  __int64 v12; // rax
  _DWORD *v13; // rax
  _DWORD *v14; // rdi
  PVOID RestartKey; // [rsp+68h] [rbp+10h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = a3;
  v3 = 0;
  v4 = (struct _RTL_GENERIC_TABLE *)(a1 + 728);
  RestartKey = 0LL;
  do
  {
LABEL_12:
    v13 = RtlEnumerateGenericTableWithoutSplaying(v4, &RestartKey);
    v14 = v13;
    if ( !v13 )
      return (unsigned int)v3;
    v5 = v13[10];
    v6 = 0;
  }
  while ( !v5 );
  v7 = 0LL;
  while ( 1 )
  {
    v8 = v7 + *((_QWORD *)v14 + 2);
    v9 = *(_DWORD *)(v8 + 80);
    v10 = v9 + 1;
    if ( v9 + 1 < v9 )
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      goto LABEL_10;
    }
    v3 = 0;
    if ( v10 > *(_DWORD *)(v8 + 76) )
      break;
    *(_QWORD *)(*(_QWORD *)(v8 + 56) + 8LL * *(unsigned int *)(v8 + 80)) = v17;
    *(_DWORD *)(v8 + 80) = v10;
LABEL_11:
    v12 = v17;
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    ++*(_DWORD *)(v12 + 16);
    ++v6;
    v7 += 88LL;
    if ( v6 >= v5 )
      goto LABEL_12;
  }
  v11 = DynArrayImpl<0>::AddMultipleAndSet(v8 + 56, 8u, 1, &v17);
  v3 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
LABEL_10:
  if ( v3 >= 0 )
    goto LABEL_11;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x2Eu);
  return (unsigned int)v3;
}
