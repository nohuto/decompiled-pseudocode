/*
 * XREFs of ??$AddResponseToOutstandingDxSurfaces@UProcessTokenMatchPolicy@@@CWindowNode@@QEAAJAEBUProcessTokenMatchPolicy@@PEAVCResponseItem@@@Z @ 0x18005EA78
 * Callers:
 *     ?AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z @ 0x1800A5B5C (-AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowNode::AddResponseToOutstandingDxSurfaces<ProcessTokenMatchPolicy>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  unsigned int v3; // edi
  struct _RTL_GENERIC_TABLE *v4; // r12
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  unsigned int v8; // r15d
  unsigned int v9; // r14d
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // r10
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v15; // eax
  int v16; // ebx
  __int64 v17; // rax
  PVOID RestartKey; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+80h] [rbp+18h] BYREF

  v20 = a3;
  v3 = 0;
  v4 = (struct _RTL_GENERIC_TABLE *)(a1 + 920);
  RestartKey = 0LL;
  do
  {
LABEL_2:
    v6 = RtlEnumerateGenericTableWithoutSplaying(v4, &RestartKey);
    v7 = v6;
    if ( !v6 )
      return v3;
    v8 = v6[10];
    v9 = 0;
  }
  while ( !v8 );
  v10 = 0LL;
  while ( 1 )
  {
    v11 = *((_QWORD *)v7 + 2);
    if ( *a2 != *(_DWORD *)(v11 + v10 + 48) )
      goto LABEL_13;
    v12 = v11 + v10;
    v13 = *(_DWORD *)(v11 + v10 + 80);
    v14 = v13 + 1;
    if ( v13 + 1 < v13 )
      break;
    v3 = 0;
    if ( v14 > *(_DWORD *)(v12 + 76) )
    {
      v15 = DynArrayImpl<0>::AddMultipleAndSet(v12 + 56, 8LL, 1LL, &v20);
      v16 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
      v3 = v16;
      if ( v16 < 0 )
        goto LABEL_16;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(v12 + 56) + 8LL * v13) = v20;
      *(_DWORD *)(v12 + 80) = v14;
    }
    v17 = v20;
    _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
    ++*(_DWORD *)(v17 + 16);
LABEL_13:
    ++v9;
    v10 += 88LL;
    if ( v9 >= v8 )
      goto LABEL_2;
  }
  v16 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  v3 = -2147024362;
LABEL_16:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x2Eu);
  return v3;
}
