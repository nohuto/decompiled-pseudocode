/*
 * XREFs of ?Serialize@DMMVIDEOPRESENTSOURCE@@QEBAXQEAU_DMM_VIDEOPRESENTSOURCE_SERIALIZATION@@@Z @ 0x1C0180FBC
 * Callers:
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0181084 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 * Callees:
 *     ?IsMonitorVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007C7C (-IsMonitorVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007EC4 (-IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 */

void __fastcall DMMVIDEOPRESENTSOURCE::Serialize(
        DMMVIDEOPRESENTSOURCE *this,
        struct _DMM_VIDEOPRESENTSOURCE_SERIALIZATION *const a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  *(_DWORD *)a2 = *((_DWORD *)this + 6);
  *((_BYTE *)a2 + 4) = *((_BYTE *)this + 128);
  *((_BYTE *)a2 + 5) = 0;
  if ( !*((_QWORD *)this + 5) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
  if ( v6 )
  {
    v7 = *((_DWORD *)this + 6);
    if ( !*(_QWORD *)(v6 + 8) )
    {
      v8 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v8);
    }
    *((_BYTE *)a2 + 5) = ADAPTER_DISPLAY::IsPrimaryVisible(*(ADAPTER_DISPLAY **)(v6 + 8), v7);
    v10 = *((_DWORD *)this + 6);
    if ( !*(_QWORD *)(v6 + 8) )
    {
      v11 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v11);
    }
    *((_BYTE *)a2 + 6) = ADAPTER_DISPLAY::IsMonitorVisible(*(ADAPTER_DISPLAY **)(v6 + 8), v10);
  }
}
