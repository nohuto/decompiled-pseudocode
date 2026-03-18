/*
 * XREFs of ??$AddResponseToOutstandingDxSurfaces@UProcessTokenMatchPolicy@@@CWindowNode@@QEAAJAEBUProcessTokenMatchPolicy@@PEAVCResponseItem@@@Z @ 0x180025988
 * Callers:
 *     ?AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z @ 0x180037BAC (-AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CWindowNode::AddResponseToOutstandingDxSurfaces<ProcessTokenMatchPolicy>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  int v3; // ebx
  struct _RTL_GENERIC_TABLE *v4; // r15
  _DWORD *v6; // rax
  _DWORD *v7; // rdi
  unsigned int v9; // r14d
  unsigned int v10; // ebp
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r10
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  PVOID RestartKey; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+70h] [rbp+18h] BYREF

  v19 = a3;
  v3 = 0;
  v4 = (struct _RTL_GENERIC_TABLE *)(a1 + 728);
  RestartKey = 0LL;
  while ( 1 )
  {
    v6 = RtlEnumerateGenericTableWithoutSplaying(v4, &RestartKey);
    v7 = v6;
    if ( !v6 )
      return (unsigned int)v3;
    v9 = v6[10];
    v10 = 0;
    if ( v9 )
    {
      v11 = 0LL;
LABEL_9:
      v13 = *((_QWORD *)v7 + 2);
      if ( *a2 != *(_DWORD *)(v11 + v13 + 48) )
        goto LABEL_8;
      v14 = v11 + v13;
      v15 = *(_DWORD *)(v11 + v13 + 80);
      v16 = v15 + 1;
      if ( v15 + 1 >= v15 )
      {
        v3 = 0;
        if ( v16 > *(_DWORD *)(v14 + 76) )
        {
          v17 = DynArrayImpl<0>::AddMultipleAndSet(v14 + 56, 8LL, 1LL, &v19);
          v3 = v17;
          if ( v17 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
          goto LABEL_6;
        }
        *(_QWORD *)(*(_QWORD *)(v14 + 56) + 8LL * *(unsigned int *)(v11 + v13 + 80)) = v19;
        *(_DWORD *)(v14 + 80) = v16;
      }
      else
      {
        v3 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_6:
        if ( v3 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x2Eu);
          return (unsigned int)v3;
        }
      }
      v12 = v19;
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
      ++*(_DWORD *)(v12 + 16);
LABEL_8:
      ++v10;
      v11 += 88LL;
      if ( v10 >= v9 )
        continue;
      goto LABEL_9;
    }
  }
}
