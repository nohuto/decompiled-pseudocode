/*
 * XREFs of ?QueryInterface@CRenderDataBuilder@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011AA30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRenderDataBuilder::QueryInterface(CRenderDataBuilder *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  int v4; // r9d
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( !a3 )
  {
    v4 = -2147024809;
    v8 = 54;
LABEL_11:
    v3 = v4;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v8);
    return v3;
  }
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_92ca7dff_2ac8_4c49_9927_fab209db648e.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_92ca7dff_2ac8_4c49_9927_fab209db648e.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_92ca7dff_2ac8_4c49_9927_fab209db648e.Data4;
  if ( v5 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
    {
      *a3 = 0LL;
      v4 = -2147467262;
      v8 = 68;
      goto LABEL_11;
    }
  }
  *a3 = this;
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  return v3;
}
