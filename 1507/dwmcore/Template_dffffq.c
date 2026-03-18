/*
 * XREFs of Template_dffffq @ 0x1800FAC5C
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800325D0 (--$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOccl.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18007B820 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?FlushOcclusionRects@COcclusionContext@@QEAAJXZ @ 0x1800E0260 (-FlushOcclusionRects@COcclusionContext@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

ULONG __fastcall Template_dffffq(__int64 a1, __int64 a2, int a3, float a4, char a5, char a6, char a7, char a8)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-39h] BYREF
  float *v10; // [rsp+30h] [rbp-29h]
  __int64 v11; // [rsp+38h] [rbp-21h]
  char *v12; // [rsp+40h] [rbp-19h]
  __int64 v13; // [rsp+48h] [rbp-11h]
  char *v14; // [rsp+50h] [rbp-9h]
  __int64 v15; // [rsp+58h] [rbp-1h]
  char *v16; // [rsp+60h] [rbp+7h]
  __int64 v17; // [rsp+68h] [rbp+Fh]
  char *v18; // [rsp+70h] [rbp+17h]
  __int64 v19; // [rsp+78h] [rbp+1Fh]
  int v20; // [rsp+B0h] [rbp+57h] BYREF
  float v21; // [rsp+B8h] [rbp+5Fh] BYREF

  v21 = a4;
  v20 = a3;
  UserData.Ptr = (ULONGLONG)&v20;
  *(_QWORD *)&UserData.Size = 4LL;
  v10 = &v21;
  v11 = 4LL;
  v12 = &a5;
  v13 = 4LL;
  v14 = &a6;
  v16 = &a7;
  v18 = &a8;
  v15 = 4LL;
  v17 = 4LL;
  v19 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_OCCLUSIONEVENT, 6u, &UserData);
}
