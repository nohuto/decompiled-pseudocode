/*
 * XREFs of GetMiPInputTransform @ 0x1C01D85CC
 * Callers:
 *     NtUserGetPointerInputTransform @ 0x1C0214420 (NtUserGetPointerInputTransform.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z @ 0x1C022414C (-GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z.c)
 */

__int64 __fastcall GetMiPInputTransform(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rcx
  InputTransform *v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct tagINPUT_TRANSFORM *v9; // [rsp+20h] [rbp-18h]
  char v10; // [rsp+28h] [rbp-10h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 1136);
  if ( !v4 || (*(_DWORD *)v4 & 1) == 0 || (v5 = (InputTransform *)ValidateHwnd(*(_QWORD *)(v4 + 48))) == 0LL )
  {
LABEL_8:
    v7 = 87LL;
    goto LABEL_9;
  }
  v6 = *(_QWORD *)(a1 + 1136);
  if ( (*(_DWORD *)(v6 + 36) & 0x400000) != 0 )
  {
    v11 = *(_QWORD *)(v6 + 104);
    if ( (unsigned int)InputTransform::GetTransformList(v5, (struct tagWND *)1, (unsigned int)&v11, a2, v9, v10) )
      return 1LL;
    goto LABEL_8;
  }
  v7 = 232LL;
LABEL_9:
  UserSetLastError(v7);
  return 0LL;
}
