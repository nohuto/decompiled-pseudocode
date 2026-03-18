/*
 * XREFs of ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x180088F14
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18003AAC4 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IIW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180088BC0 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IIW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelM.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetTarget(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETTARGET *a3)
{
  int *v3; // r11
  struct CResource *ResourceWithoutType; // rax
  unsigned int v5; // edx
  const struct MILCMD_BASEEXPRESSION_SETTARGET *v6; // r10
  int v8; // eax
  unsigned int v9; // ebx

  v3 = (int *)a2;
  ResourceWithoutType = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  v6 = a3;
  if ( v5 )
    ResourceWithoutType = CResourceTable::GetResourceWithoutType((CResourceTable *)v3, v5);
  v8 = CBaseExpression::SetTarget(
         (__int64)this,
         v3[12],
         ResourceWithoutType,
         v5,
         *((_DWORD *)v6 + 3),
         *((_DWORD *)v6 + 7),
         *((unsigned __int16 *)v6 + 13),
         *((_BYTE *)v6 + 24),
         *((_QWORD *)v6 + 2));
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x5Eu);
  else
    return 0;
  return v9;
}
