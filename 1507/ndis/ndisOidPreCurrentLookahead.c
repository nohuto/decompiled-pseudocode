/*
 * XREFs of ndisOidPreCurrentLookahead @ 0x1C001ED00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 */

char __fastcall ndisOidPreCurrentLookahead(_QWORD *a1)
{
  __int64 v1; // rbx
  char v3; // di
  int v4; // eax
  unsigned int v5; // ebp
  __int64 v6; // r13
  __int64 v7; // r15
  KIRQL v8; // cl
  unsigned int v9; // r12d
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // rax
  int v16; // eax

  v1 = a1[4];
  v3 = 1;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(81LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, *a1, v1);
  v4 = *(_DWORD *)(v1 + 4);
  if ( (v4 & 0xFFFFFFFD) != 0 )
  {
    if ( v4 != 1 )
      goto LABEL_17;
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < 4u )
    {
      *(_DWORD *)(v1 + 56) = 4;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    if ( *((_DWORD *)a1 + 10) )
    {
      if ( (unsigned __int8)byte_1C0085312 >= 4u )
        WPP_SF_qqd(82LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, 0LL, v1, *((_DWORD *)a1 + 10));
    }
    else
    {
      v5 = **(_DWORD **)(v1 + 40);
      if ( a1[3] )
      {
        v6 = *(_QWORD *)(v1 + 104);
        v7 = *(_QWORD *)(v6 + 16);
        if ( v5 <= *(_DWORD *)(v7 + 596) )
        {
          v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 96));
          v9 = 0;
          v10 = *(_QWORD *)(v7 + 56);
          *(_QWORD *)(v7 + 520) = KeGetCurrentThread();
          *(_DWORD *)(v7 + 1856) = 2300012;
          while ( v10 )
          {
            v11 = *(_DWORD *)(v10 + 264);
            v10 = *(_QWORD *)(v10 + 392);
            if ( v11 > v9 )
              v9 = v11;
          }
          *(_QWORD *)(v7 + 520) = 0LL;
          *(_DWORD *)(v7 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), v8);
          if ( v5 > v9 )
          {
            *(_DWORD *)(v1 + 164) = v5;
            *(_QWORD *)(v1 + 152) = *(_QWORD *)(v1 + 40);
            *(_DWORD *)(v1 + 160) = *(_DWORD *)(v1 + 48);
            *(_QWORD *)(v1 + 40) = v1 + 164;
            *(_DWORD *)(v1 + 48) = 4;
LABEL_16:
            v3 = 0;
            goto LABEL_17;
          }
          *(_DWORD *)(v6 + 264) = v5;
LABEL_23:
          *((_DWORD *)a1 + 10) = 0;
          goto LABEL_17;
        }
      }
      else
      {
        v13 = *a1;
        if ( !*a1 )
          goto LABEL_17;
        if ( v5 <= *(_DWORD *)(v13 + 596) )
        {
          v14 = *(_DWORD *)(v13 + 592);
          if ( v5 >= v14 )
          {
            if ( !v14 )
              v5 = *(_DWORD *)(v13 + 596);
            if ( v5 > v14 )
            {
              *((_DWORD *)a1 + 10) = 0;
              goto LABEL_16;
            }
          }
          *(_DWORD *)(v1 + 52) = 4;
          *(_DWORD *)(v1 + 56) = 4;
          goto LABEL_23;
        }
      }
      *(_QWORD *)(v1 + 52) = 0LL;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
  }
  else
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < 4u )
    {
      *(_DWORD *)(v1 + 56) = 4;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    if ( *((_DWORD *)a1 + 10) )
    {
      *((_DWORD *)a1 + 10) = -1073676266;
      goto LABEL_17;
    }
    v15 = a1[3];
    if ( v15 )
    {
      v16 = *(_DWORD *)(v15 + 264);
    }
    else
    {
      if ( !*a1 )
        goto LABEL_17;
      v16 = *(_DWORD *)(*a1 + 596LL);
    }
    **(_DWORD **)(v1 + 40) = v16;
    *(_DWORD *)(v1 + 52) = 4;
  }
LABEL_17:
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(83LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, *a1, v1);
  return v3;
}
