/*
 * XREFs of ?IsSufficientIntervalForStats@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@_KPEAM@Z @ 0x1801294B0
 * Callers:
 *     ?IsEligibleForOverlays@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180128DDC (-IsEligibleForOverlays@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall COverlayContext::IsSufficientIntervalForStats(
        COverlayContext *this,
        struct COverlayContext::OverlayPlaneInfo *a2,
        __int64 a3,
        float *a4)
{
  bool v4; // r10
  float v5; // xmm1_4
  __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  float v9; // xmm0_4
  float v10; // xmm1_4
  bool result; // al

  v4 = 0;
  v5 = FLOAT_1_0;
  v6 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 184LL);
  if ( !v6 )
    goto LABEL_8;
  v7 = (__int64)((unsigned __int128)(*(__int64 *)(*((_QWORD *)this + 138) + 312LL) * (__int128)0x20C49BA5E353F7CFLL) >> 64) >> 7;
  v8 = (a3 - v6) / ((v7 >> 63) + v7);
  if ( *((_BYTE *)a2 + 184) )
  {
    if ( (unsigned int)v8 >= CCommonRegistryData::m_dwOverlayDisqualifyInterval )
    {
      v9 = (float)(int)CCommonRegistryData::m_dwOverlayDisqualifyInterval;
      v10 = (float)(int)v8;
LABEL_7:
      v5 = v10 / v9;
LABEL_8:
      v4 = 1;
    }
  }
  else if ( (unsigned int)v8 >= CCommonRegistryData::m_dwOverlayQualifyInterval )
  {
    v9 = (float)(int)CCommonRegistryData::m_dwOverlayQualifyInterval;
    v10 = (float)(int)v8;
    goto LABEL_7;
  }
  result = v4;
  *a4 = v5;
  return result;
}
