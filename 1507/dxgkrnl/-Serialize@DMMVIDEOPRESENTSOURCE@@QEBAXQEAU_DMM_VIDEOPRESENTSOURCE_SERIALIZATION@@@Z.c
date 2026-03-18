/*
 * XREFs of ?Serialize@DMMVIDEOPRESENTSOURCE@@QEBAXQEAU_DMM_VIDEOPRESENTSOURCE_SERIALIZATION@@@Z @ 0x1C017D27C
 * Callers:
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C017D344 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 * Callees:
 *     ?IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0006930 (-IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsMonitorVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000AFDC (-IsMonitorVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 */

void __fastcall DMMVIDEOPRESENTSOURCE::Serialize(
        DMMVIDEOPRESENTSOURCE *this,
        struct _DMM_VIDEOPRESENTSOURCE_SERIALIZATION *const a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  __int64 v16; // rax

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  *(_DWORD *)a2 = *((_DWORD *)this + 6);
  *((_BYTE *)a2 + 4) = *((_BYTE *)this + 128);
  *((_BYTE *)a2 + 5) = 0;
  if ( !*((_QWORD *)this + 5) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
  if ( v8 )
  {
    v9 = *((_DWORD *)this + 6);
    if ( !*(_QWORD *)(v8 + 8) )
    {
      v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      WdLogEvent5_WdAssertion(v10);
    }
    *((_BYTE *)a2 + 5) = ADAPTER_DISPLAY::IsPrimaryVisible(*(ADAPTER_DISPLAY **)(v8 + 8), v9);
    v15 = *((_DWORD *)this + 6);
    if ( !*(_QWORD *)(v8 + 8) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      WdLogEvent5_WdAssertion(v16);
    }
    *((_BYTE *)a2 + 6) = ADAPTER_DISPLAY::IsMonitorVisible(*(ADAPTER_DISPLAY **)(v8 + 8), v15);
  }
}
