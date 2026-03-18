/*
 * XREFs of ?HrFindInterface@CMILBrushSolid@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18018C360
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMILBrushSolid::HrFindInterface(CMILBrushSolid *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  char *v6; // rcx

  v3 = 0;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_42d076e2_de9a_47cc_a5e7_f07c7f260685.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_42d076e2_de9a_47cc_a5e7_f07c7f260685.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_42d076e2_de9a_47cc_a5e7_f07c7f260685.Data4;
    if ( !v4 )
      goto LABEL_9;
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_78430d18_fa62_47fc_923e_5ba7da930cfe.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_78430d18_fa62_47fc_923e_5ba7da930cfe.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_78430d18_fa62_47fc_923e_5ba7da930cfe.Data4;
    if ( v5 )
    {
      return (unsigned int)-2147467262;
    }
    else
    {
LABEL_9:
      if ( this )
        v6 = (char *)this + 56;
      else
        v6 = 0LL;
      *a3 = v6;
    }
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xA6u);
  }
  return v3;
}
