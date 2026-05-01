/*
 * XREFs of ?OnApplicationTerminated@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_K@Z @ 0x18003D260
 * Callers:
 *     <none>
 * Callees:
 *     RmpValidateAndCaptureUserSid @ 0x180002AF4 (RmpValidateAndCaptureUserSid.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000FDA0 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::OnApplicationTerminated(
        ExecutionModel::ResourceManager *this,
        LPCWSTR pwsz,
        void *Src,
        int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  union _RM_SID *Srca; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v11[80]; // [rsp+40h] [rbp-88h] BYREF

  RmpValidateAndCaptureUserSid(Src, (__int64)pwsz, a5, v11, &Srca);
  ExecutionModel::ResourceManager::OnApplicationTerminated(this, pwsz, Srca, a4, a5, a6);
  return 0LL;
}
