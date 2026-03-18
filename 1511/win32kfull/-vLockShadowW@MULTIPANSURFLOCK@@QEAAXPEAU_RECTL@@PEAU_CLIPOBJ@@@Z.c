/*
 * XREFs of ?vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0289F44
 * Callers:
 *     ??0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z @ 0x1C0287754 (--0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0041C98 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0041DE4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z @ 0x1C028947C (-ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z.c)
 */

void __fastcall MULTIPANSURFLOCK::vLockShadowW(MULTIPANSURFLOCK *this, struct _RECTL *a2, struct _CLIPOBJ *a3)
{
  LONG left; // eax
  LONG top; // eax
  LONG right; // eax
  LONG bottom; // eax
  char *v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  signed int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r15
  int v19; // eax
  __int64 v20; // rcx
  int v21; // r14d
  __int64 v22; // rsi
  int v23; // eax
  int v24; // ebx
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  char *v29; // rsi
  __int64 v30; // r12
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r14
  __int64 v34; // rcx
  char *v35; // r15
  __int64 v36; // rbx
  __int64 v37; // rsi
  __int64 v38; // rcx
  __int64 i; // rbx
  __int64 v40; // rsi
  char *v41; // r14
  __int64 v42; // rax
  struct _PANDEV *v43; // rcx
  __int64 v44; // rcx
  char *v45; // [rsp+30h] [rbp-20h] BYREF
  int v46; // [rsp+38h] [rbp-18h]
  int v47; // [rsp+3Ch] [rbp-14h]
  __int128 v48; // [rsp+40h] [rbp-10h] BYREF
  __int64 v49; // [rsp+90h] [rbp+40h]
  __int64 v50; // [rsp+A0h] [rbp+50h]
  __int64 v51; // [rsp+A8h] [rbp+58h]

  if ( a3 && a3->iDComplexity )
  {
    left = a2->left;
    if ( a3->rclBounds.left > a2->left )
      left = a3->rclBounds.left;
    LODWORD(v48) = left;
    top = a2->top;
    if ( a3->rclBounds.top > top )
      top = a3->rclBounds.top;
    DWORD1(v48) = top;
    right = a2->right;
    if ( a3->rclBounds.right < right )
      right = a3->rclBounds.right;
    DWORD2(v48) = right;
    bottom = a2->bottom;
    if ( a3->rclBounds.bottom < bottom )
      bottom = a3->rclBounds.bottom;
    HIDWORD(v48) = bottom;
  }
  else
  {
    v48 = (__int128)*a2;
  }
  ERECTL::vOrder((ERECTL *)&v48);
  v9 = *((_QWORD *)this + 4);
  if ( v9 )
  {
    v10 = *((_QWORD *)this + 4);
  }
  else
  {
    v9 = *((_QWORD *)this + 5);
    v10 = v9;
  }
  v11 = *(_QWORD *)(v10 + 64);
  v45 = v8;
  v12 = *(_DWORD *)(v11 + 32);
  v13 = *(_QWORD *)(v9 + 64);
  v46 = v12;
  v47 = *(_DWORD *)(v13 + 36);
  ERECTL::operator*=(&v48, &v45);
  if ( !ERECTL::bEmpty((ERECTL *)&v48) )
  {
    v15 = v14;
    if ( !v14 )
      v15 = *((_QWORD *)this + 5);
    v16 = (unsigned int)v48 / *(_DWORD *)(v15 + 776);
    v17 = v14;
    v18 = v16;
    if ( !v14 )
      v17 = *((_QWORD *)this + 5);
    v19 = DWORD2(v48) / *(_DWORD *)(v17 + 776);
    v20 = v14;
    v21 = v19;
    if ( !v14 )
      v20 = *((_QWORD *)this + 5);
    v22 = DWORD1(v48) / *(_DWORD *)(v20 + 780);
    if ( !v14 )
      v14 = *((_QWORD *)this + 5);
    v23 = HIDWORD(v48) / *(_DWORD *)(v14 + 780);
    *((_BYTE *)this + 49) = 1;
    v24 = v23;
    memset((char *)this + 131, 0, 0x51uLL);
    v25 = v18;
    v26 = v24 + 1;
    v27 = v22;
    v50 = v26;
    v49 = v21 + 1;
    v28 = 9 * v22;
    v51 = v22;
    v29 = (char *)this + 9 * v22 + 131;
    v45 = v29;
    v30 = 8 * (v18 + v28) + 128;
    *(_QWORD *)&v48 = v30;
LABEL_25:
    v31 = *((_QWORD *)this + 4);
    if ( !v31 )
      v31 = *((_QWORD *)this + 5);
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(v31 + 792) + 32LL), UserRequest, 0, 0, 0LL);
    v32 = v49;
    v33 = v27;
    v34 = v50;
    v35 = v29;
    while ( v33 < v34 )
    {
      v36 = v25;
      if ( v25 < v32 )
      {
        v37 = v30;
        while ( 1 )
        {
          v38 = *((_QWORD *)this + 4);
          if ( !v38 )
            v38 = *((_QWORD *)this + 5);
          if ( !EngAcquireSemaphoreNoWait(*(HSEMAPHORE *)(v37 + v38)) )
            break;
          v35[v36] = 1;
          v37 += 8LL;
          v32 = v49;
          if ( ++v36 >= v49 )
          {
            v34 = v50;
            goto LABEL_36;
          }
        }
        for ( i = 88LL; i >= 16; i -= 9LL )
        {
          v40 = 8LL;
          v41 = (char *)this + i;
          do
          {
            if ( v41[v40 + 115] == 1 )
            {
              v42 = *((_QWORD *)this + 4);
              if ( !v42 )
                v42 = *((_QWORD *)this + 5);
              EngReleaseSemaphore(*(HSEMAPHORE *)(v42 + 8 * (i + v40)));
              v41[v40 + 115] = 0;
            }
            --v40;
          }
          while ( v40 >= 0 );
        }
        v43 = (struct _PANDEV *)*((_QWORD *)this + 4);
        if ( !v43 )
          v43 = (struct _PANDEV *)*((_QWORD *)this + 5);
        ShadowUnLockWait(v43);
        memset((char *)this + 131, 0, 0x51uLL);
        v27 = v51;
        v29 = v45;
        v30 = v48;
        goto LABEL_25;
      }
LABEL_36:
      ++v33;
      v30 += 72LL;
      v35 += 9;
    }
    v44 = *((_QWORD *)this + 4);
    if ( !v44 )
      v44 = *((_QWORD *)this + 5);
    KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v44 + 792) + 32LL), 0);
  }
}
