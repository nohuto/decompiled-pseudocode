/*
 * XREFs of ?HrFindInterface@CMILBrushLinearGradient@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18018C3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMILBrushLinearGradient::HrFindInterface(
        CMILBrushLinearGradient *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  char *v5; // rcx
  __int64 v6; // rax

  v3 = 0;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_42d076e2_de9a_47cc_a5e7_f07c7f260685.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_42d076e2_de9a_47cc_a5e7_f07c7f260685.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_42d076e2_de9a_47cc_a5e7_f07c7f260685.Data4;
    if ( v4 )
    {
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_8ebb46a9_fa49_49b3_ba37_01417203913e.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_8ebb46a9_fa49_49b3_ba37_01417203913e.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_8ebb46a9_fa49_49b3_ba37_01417203913e.Data4;
      if ( v6 )
        return (unsigned int)-2147467262;
      if ( this )
      {
        v5 = (char *)this + 232;
        goto LABEL_14;
      }
    }
    else if ( this )
    {
      v5 = (char *)this + 120;
LABEL_14:
      *a3 = v5;
      return v3;
    }
    v5 = 0LL;
    goto LABEL_14;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x83u);
  return v3;
}
