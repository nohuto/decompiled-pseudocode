/*
 * XREFs of ?HrFindInterface@CTransformingGeometrySink@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18018A2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTransformingGeometrySink::HrFindInterface(
        CTransformingGeometrySink *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  char *v5; // rax

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2cd9069e_12e2_11dc_9fed_001143a055f9.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2cd9069e_12e2_11dc_9fed_001143a055f9.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2cd9069e_12e2_11dc_9fed_001143a055f9.Data4;
  v4 = 0;
  if ( v3 )
  {
    v4 = -2147467262;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467262, 0x7Cu);
  }
  else
  {
    v5 = (char *)this + 16;
    if ( !this )
      v5 = 0LL;
    *a3 = v5;
  }
  return v4;
}
