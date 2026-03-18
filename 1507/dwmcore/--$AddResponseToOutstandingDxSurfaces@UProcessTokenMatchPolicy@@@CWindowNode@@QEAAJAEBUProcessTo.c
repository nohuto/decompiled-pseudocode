/*
 * XREFs of ??$AddResponseToOutstandingDxSurfaces@UProcessTokenMatchPolicy@@@CWindowNode@@QEAAJAEBUProcessTokenMatchPolicy@@PEAVCResponseItem@@@Z @ 0x1800EFA8C
 * Callers:
 *     ?AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z @ 0x180062894 (-AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowNode::AddResponseToOutstandingDxSurfaces<ProcessTokenMatchPolicy>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  unsigned int v3; // edi
  struct _RTL_GENERIC_TABLE *v4; // r12
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // r10
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // eax
  int v14; // ebx
  __int64 v15; // rax
  _DWORD *v16; // rax
  _DWORD *v17; // rsi
  PVOID RestartKey; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+80h] [rbp+18h] BYREF

  v20 = a3;
  v3 = 0;
  v4 = (struct _RTL_GENERIC_TABLE *)(a1 + 968);
  RestartKey = 0LL;
  do
  {
LABEL_13:
    v16 = RtlEnumerateGenericTableWithoutSplaying(v4, &RestartKey);
    v17 = v16;
    if ( !v16 )
      return v3;
    v6 = v16[10];
    v7 = 0;
  }
  while ( !v6 );
  v8 = 0LL;
  while ( 1 )
  {
    v9 = *((_QWORD *)v17 + 2);
    if ( *a2 != *(_DWORD *)(v9 + v8 + 48) )
      goto LABEL_12;
    v10 = v9 + v8;
    v11 = *(_DWORD *)(v9 + v8 + 80);
    v12 = v11 + 1;
    if ( v11 + 1 < v11 )
      break;
    v3 = 0;
    if ( v12 > *(_DWORD *)(v10 + 76) )
    {
      v13 = DynArrayImpl<0>::AddMultipleAndSet(v10 + 56, 8u, 1, &v20);
      v14 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
      v3 = v14;
      if ( v14 < 0 )
        goto LABEL_16;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(v10 + 56) + 8LL * v11) = v20;
      *(_DWORD *)(v10 + 80) = v12;
    }
    v15 = v20;
    _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
    ++*(_DWORD *)(v15 + 16);
LABEL_12:
    ++v7;
    v8 += 88LL;
    if ( v7 >= v6 )
      goto LABEL_13;
  }
  v14 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  v3 = -2147024362;
LABEL_16:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x2Eu);
  return v3;
}
