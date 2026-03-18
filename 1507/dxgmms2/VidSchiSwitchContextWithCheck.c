/*
 * XREFs of VidSchiSwitchContextWithCheck @ 0x1C0003888
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0004BB0 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiDecrementContextReference @ 0x1C0001880 (VidSchiDecrementContextReference.c)
 *     VidSchiUpdateContextStatus @ 0x1C0002EC0 (VidSchiUpdateContextStatus.c)
 *     VidSchiCheckPreemptionPolicy @ 0x1C0003AE8 (VidSchiCheckPreemptionPolicy.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0004F20 (VidSchiProfilePerformanceTick.c)
 *     VidSchiIncrementContextReference @ 0x1C0006980 (VidSchiIncrementContextReference.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiAddContextToFlipDevice@@YAXPEAU_VIDSCH_CONTEXT@@I@Z @ 0x1C001229C (-VidSchiAddContextToFlipDevice@@YAXPEAU_VIDSCH_CONTEXT@@I@Z.c)
 */

__int64 __fastcall VidSchiSwitchContextWithCheck(struct _VIDSCH_CONTEXT *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rbp
  unsigned int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r10
  bool v11; // si
  __int64 v12; // rsi
  struct _VIDSCH_CONTEXT *v13; // rdi
  bool v15; // si
  unsigned int v16; // r11d
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  void (__fastcall *v23)(_QWORD); // rax
  void (__fastcall *v24)(_QWORD); // rax

  v2 = *((_QWORD *)a1 + 81);
  v4 = *((_QWORD *)a1 + 12);
  v6 = 1;
  v7 = *(_QWORD *)(v2 + 80);
  v8 = *(_QWORD *)(v4 + 24);
  v9 = *(_QWORD *)(v7 + 104);
  v10 = *(_QWORD *)(*(_QWORD *)(v7 + 96) + 24LL);
  if ( (*(_DWORD *)(v2 + 72) & 8) != 0 && *(_DWORD *)(v2 + 376) == 4 )
  {
    v17 = *(unsigned int *)(v2 + 144);
    if ( *(_DWORD *)(*(_QWORD *)(v10 + 8 * v17 + 2640) + 2320LL) >= *(_DWORD *)(v10 + 2156) )
    {
LABEL_24:
      VidSchiAddContextToFlipDevice(a1, v17);
      v18 = 3LL;
      v19 = 11936LL;
LABEL_38:
      VidSchiUpdateContextStatus((__int64)a1, (_QWORD *)v18, (__int64 *)v19);
      return 3LL;
    }
  }
  if ( !*(_DWORD *)(v2 + 48) && (*(_DWORD *)(v2 + 64) & 8) == 0 )
  {
    v15 = !*(_DWORD *)(v9 + 1004) && !*(_BYTE *)(v10 + 51);
    v16 = *(_DWORD *)(v2 + 448);
    v17 = 0LL;
    v9 = *(unsigned int *)(v2 + 452);
    if ( v16 > 0x10 )
    {
      if ( (_DWORD)v9 )
      {
        while ( (v9 & 1) == 0 || !*(_DWORD *)(*(_QWORD *)(v10 + 8 * v17 + 2640) + 2320LL) )
        {
          v17 = (unsigned int)(v17 + 1);
          v9 = (unsigned int)v9 >> 1;
          if ( !(_DWORD)v9 )
            goto LABEL_3;
        }
        goto LABEL_24;
      }
    }
    else if ( v16 )
    {
      v2 += 456LL;
      while ( 1 )
      {
        if ( (v20 = *(_QWORD *)(*(_QWORD *)v2 + 96LL), !v15)
          || (v21 = *(_DWORD *)v20, (*(_DWORD *)v20 & 0x20000000) != 0) && v21 < 0
          || (v21 & 0x80000) != 0 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(v20 + 16) + 8LL) )
            break;
        }
        LODWORD(v17) = v17 + 1;
        v2 += 8LL;
        if ( (unsigned int)v17 >= v16 )
          goto LABEL_3;
      }
      LODWORD(v17) = *(_DWORD *)(v20 + 24);
      goto LABEL_24;
    }
  }
LABEL_3:
  v11 = *(_DWORD *)(v4 + 3080) != -1;
  if ( (*((_DWORD *)a1 + 161) & 0xF) != 0 )
  {
    v11 = 0;
  }
  else if ( (unsigned int)VidSchiCheckPreemptionPolicy(a1, a2, v2, v9) )
  {
    v6 = 4;
  }
  else
  {
    *(_QWORD *)(v8 + 1672) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)(v8 + 1632));
    *(_QWORD *)(v8 + 1560) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)(v8 + 1520));
    if ( *(int *)(v4 + 2832) <= 0 || *(_DWORD *)(v4 + 2848) >= 0xEu )
    {
      v22 = *(_QWORD *)(v8 + 352) & ~(1LL << *(_WORD *)(v4 + 4));
      *(_QWORD *)(v8 + 352) = v22;
      if ( (v22 & *(_QWORD *)(v8 + 344)) != 0 )
        return 3LL;
      if ( v11 && (*(_DWORD *)(*((_QWORD *)a1 + 81) + 76LL) & 0x10) == 0 )
      {
        if ( *(_DWORD *)(v4 + 3080) != -1 )
        {
          v23 = *(void (__fastcall **)(_QWORD))(v8 + 2520);
          if ( v23 )
            v23(*(_QWORD *)(v8 + 2560));
        }
        *(_DWORD *)(*((_QWORD *)a1 + 81) + 76LL) |= 0x10u;
      }
      return 2LL;
    }
  }
  if ( v11 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 81) + 76LL) & 0x10) == 0 )
    {
      if ( *(_DWORD *)(v4 + 3080) != -1 )
      {
        v24 = *(void (__fastcall **)(_QWORD))(v8 + 2520);
        if ( v24 )
          v24(*(_QWORD *)(v8 + 2560));
      }
      *(_DWORD *)(*((_QWORD *)a1 + 81) + 76LL) |= 0x10u;
    }
    if ( !*(_BYTE *)(v4 + 3084) )
    {
      v18 = 8LL;
      v19 = 12060LL;
      goto LABEL_38;
    }
  }
  v12 = *((_QWORD *)a1 + 12);
  v13 = *(struct _VIDSCH_CONTEXT **)(v12 + 152);
  if ( v13 != a1 )
  {
    VidSchiProfilePerformanceTick(
      3,
      *(_QWORD *)(v12 + 24),
      *((_QWORD *)a1 + 12),
      v9,
      (__int64)a1,
      0LL,
      0LL,
      *(_QWORD *)(v12 + 152));
    VidSchiIncrementContextReference(a1);
    *(_QWORD *)(v12 + 152) = a1;
    if ( v13 )
      VidSchiDecrementContextReference(v13, 1);
  }
  return v6;
}
