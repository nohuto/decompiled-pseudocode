/*
 * XREFs of MagpRemoveTransformOutputMagFac @ 0x140099CE0
 * Callers:
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x140099894 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 * Callees:
 *     memcmp @ 0x14034FDE0 (memcmp.c)
 */

int __fastcall MagpRemoveTransformOutputMagFac(float *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdi
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm5_4
  float v8; // xmm3_4
  float v9; // xmm4_4
  float v10; // xmm1_4

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = *(_QWORD *)(*(_QWORD *)(UserSessionState + 19176) + 232LL);
  if ( v4 )
  {
    LODWORD(UserSessionState) = *(_DWORD *)(v4 + 16);
    if ( (UserSessionState & 2) != 0 )
    {
      LODWORD(UserSessionState) = memcmp((const void *)(v4 + 88), &xmmword_14035E750, 0x20uLL);
      if ( (_DWORD)UserSessionState )
      {
        v5 = *(double *)(v4 + 88);
        v6 = *(double *)(v4 + 104);
        v7 = *(double *)(v4 + 112);
        if ( v5 != 1.0 || v6 != 0.0 || v7 != 0.0 )
        {
          v8 = a1[12] - v6;
          v9 = a1[13] - v7;
          a1[12] = v8;
          a1[13] = v9;
          if ( v5 != 0.0 )
          {
            v10 = a1[5] / v5;
            *a1 = *a1 / v5;
            a1[5] = v10;
            a1[12] = v8 / v5;
            a1[13] = v9 / v5;
          }
        }
      }
    }
  }
  return UserSessionState;
}
