/*
 * XREFs of ??$AddResponseToOutstandingDxSurfaces@UAnyMatchPolicy@@@CWindowNode@@QEAAJAEBUAnyMatchPolicy@@PEAVCResponseItem@@@Z @ 0x180109944
 * Callers:
 *     ?AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z @ 0x1800A5C6C (-AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowNode::AddResponseToOutstandingDxSurfaces<AnyMatchPolicy>(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  struct _RTL_GENERIC_TABLE *v4; // r12
  unsigned int v5; // r15d
  unsigned int v6; // r14d
  __int64 v7; // rbp
  __int64 v8; // r10
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rax
  _DWORD *v14; // rax
  _DWORD *v15; // rsi
  PVOID RestartKey; // [rsp+68h] [rbp+10h] BYREF
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF

  v18 = a3;
  v3 = 0;
  v4 = (struct _RTL_GENERIC_TABLE *)(a1 + 920);
  RestartKey = 0LL;
LABEL_11:
  while ( 1 )
  {
    v14 = RtlEnumerateGenericTableWithoutSplaying(v4, &RestartKey);
    v15 = v14;
    if ( !v14 )
      return v3;
    v5 = v14[10];
    v6 = 0;
    if ( v5 )
    {
      v7 = 0LL;
      while ( 1 )
      {
        v8 = v7 + *((_QWORD *)v15 + 2);
        v9 = *(_DWORD *)(v8 + 80);
        v10 = v9 + 1;
        if ( v9 + 1 < v9 )
          break;
        v3 = 0;
        if ( v10 > *(_DWORD *)(v8 + 76) )
        {
          v11 = DynArrayImpl<0>::AddMultipleAndSet(v8 + 56, 8, 1, &v18);
          v12 = v11;
          if ( v11 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
          v3 = v12;
          if ( v12 < 0 )
            goto LABEL_14;
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(v8 + 56) + 8LL * v9) = v18;
          *(_DWORD *)(v8 + 80) = v10;
        }
        v13 = v18;
        _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
        ++*(_DWORD *)(v13 + 16);
        ++v6;
        v7 += 88LL;
        if ( v6 >= v5 )
          goto LABEL_11;
      }
      v12 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v3 = -2147024362;
LABEL_14:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x2Eu);
      return v3;
    }
  }
}
