/*
 * XREFs of ?vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0289D18
 * Callers:
 *     ??0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z @ 0x1C0287958 (--0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z.c)
 *     ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C0288EA0 (-PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0041C98 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0041DE4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z @ 0x1C028947C (-ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z.c)
 */

void __fastcall PANSURFLOCK::vLockShadow(PANSURFLOCK *this, struct _RECTL *a2, struct _CLIPOBJ *a3, int a4)
{
  LONG left; // eax
  LONG top; // eax
  LONG right; // eax
  LONG bottom; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  __int64 v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 i; // r14
  __int64 v20; // rdi
  HSEMAPHORE v21; // rcx
  int v22; // eax
  __int64 j; // rdi
  __int64 v24; // rsi
  char *v25; // r14
  __int128 v26; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v27[4]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v28; // [rsp+90h] [rbp+40h]
  __int64 v29; // [rsp+A0h] [rbp+50h]

  if ( a3 && a3->iDComplexity )
  {
    left = a2->left;
    if ( a3->rclBounds.left > a2->left )
      left = a3->rclBounds.left;
    LODWORD(v26) = left;
    top = a2->top;
    if ( a3->rclBounds.top > top )
      top = a3->rclBounds.top;
    DWORD1(v26) = top;
    right = a2->right;
    if ( a3->rclBounds.right < right )
      right = a3->rclBounds.right;
    DWORD2(v26) = right;
    bottom = a2->bottom;
    if ( a3->rclBounds.bottom < bottom )
      bottom = a3->rclBounds.bottom;
    HIDWORD(v26) = bottom;
  }
  else
  {
    v26 = (__int128)*a2;
  }
  ERECTL::vOrder((ERECTL *)&v26);
  v9 = *((_QWORD *)this + 2);
  v27[0] = 0;
  v27[1] = 0;
  v10 = *(_QWORD *)(v9 + 64);
  v27[2] = *(_DWORD *)(v10 + 32);
  v27[3] = *(_DWORD *)(v10 + 36);
  ERECTL::operator*=(&v26, v27);
  memset((char *)this + 24, 0, 0x51uLL);
  if ( !ERECTL::bEmpty((ERECTL *)&v26) )
  {
    v11 = *((_QWORD *)this + 2);
    v12 = *(_DWORD *)(v11 + 776);
    v13 = *(_DWORD *)(v11 + 780);
    v14 = (int)((unsigned int)v26 / v12);
    v15 = (int)(DWORD1(v26) / v13);
    v29 = v15;
    v16 = v15 + 8 * (v15 + 2);
    v28 = (int)(HIDWORD(v26) / v13 + 1);
    *(_QWORD *)&v26 = v16;
    v17 = (int)(DWORD2(v26) / v12 + 1);
LABEL_15:
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(*((_QWORD *)this + 2) + 792LL) + 32LL), UserRequest, 0, 0, 0LL);
    v18 = v28;
    for ( i = v15; i < v18; ++i )
    {
      v20 = v14;
      if ( v14 < v17 )
      {
        while ( 1 )
        {
          v21 = *(HSEMAPHORE *)(*((_QWORD *)this + 2) + 8 * (v16 + v20));
          v22 = a4 ? EngAcquireSemaphoreSharedNoWait(v21) : EngAcquireSemaphoreNoWait(v21);
          if ( v22 != 1 )
            break;
          *((_BYTE *)this + v16 + v20++ + 8) = 1;
          if ( v20 >= v17 )
          {
            v18 = v28;
            goto LABEL_24;
          }
        }
        for ( j = 88LL; j >= 16; j -= 9LL )
        {
          v24 = 8LL;
          v25 = (char *)this + j;
          do
          {
            if ( v25[v24 + 8] == 1 )
            {
              EngReleaseSemaphore(*(HSEMAPHORE *)(*((_QWORD *)this + 2) + 8 * (j + v24)));
              v25[v24 + 8] = 0;
            }
            --v24;
          }
          while ( v24 >= 0 );
        }
        ShadowUnLockWait(*((struct _PANDEV **)this + 2));
        memset((char *)this + 24, 0, 0x51uLL);
        v15 = v29;
        v16 = v26;
        goto LABEL_15;
      }
LABEL_24:
      v16 += 9LL;
    }
    KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(*((_QWORD *)this + 2) + 792LL) + 32LL), 0);
  }
}
