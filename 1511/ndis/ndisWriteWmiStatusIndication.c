/*
 * XREFs of ndisWriteWmiStatusIndication @ 0x1C001D65C
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C001CD04 (ndisIndicateStatusInternal.c)
 *     ndisCoIndicateStatusInternal @ 0x1C00F37F0 (ndisCoIndicateStatusInternal.c)
 * Callees:
 *     ndisSetupWmiNode @ 0x1C001A980 (ndisSetupWmiNode.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     Template_qqq @ 0x1C003EA28 (Template_qqq.c)
 */

__int64 __fastcall ndisWriteWmiStatusIndication(__int64 a1, const void **a2, __int64 a3, int a4, int *Src, int a6)
{
  __int64 v6; // rbx
  unsigned int v9; // r8d
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v13; // ebp
  int v14; // r15d
  unsigned int v15; // r13d
  int v16; // r13d
  int v17; // ecx
  PVOID v18; // r14
  unsigned int *v19; // rdi
  _DWORD *v20; // rdi
  int v21; // eax
  unsigned int v22; // ebx
  PVOID WnodeEventItem[9]; // [rsp+30h] [rbp-48h] BYREF
  bool v24; // [rsp+80h] [rbp+8h]
  int v25; // [rsp+98h] [rbp+20h] BYREF

  v25 = a4;
  v6 = *(_QWORD *)(a1 + 1368);
  v24 = (unsigned int)(a4 - 1073807371) <= 1;
  if ( !v6 )
    return 3221225473LL;
  v9 = *(unsigned __int16 *)(a1 + 1386);
  v10 = 0;
  if ( !*(_WORD *)(a1 + 1386) )
    return 3221225473LL;
  while ( 1 )
  {
    v11 = *(_DWORD *)(v6 + 24);
    if ( (v11 & 2) != 0 && *(_DWORD *)(v6 + 16) == a4 )
      break;
    ++v10;
    v6 += 28LL;
    if ( v10 >= v9 )
      return 3221225473LL;
  }
  if ( !v6 || v11 >= 0 || (*(_DWORD *)(a3 + 24) & 1) != 0 )
    return 0LL;
  v13 = Src != 0LL ? a6 : 0;
  v14 = v13 + 4;
  if ( (v11 & 0x10) == 0 )
    v14 = Src != 0LL ? a6 : 0;
  v15 = v14;
  if ( (v11 & 0x200) != 0 )
  {
    v16 = *(unsigned __int16 *)(a1 + 3864) + 46;
LABEL_15:
    v15 = v14 + v16;
    goto LABEL_16;
  }
  if ( (unsigned int)(a4 - 1073807371) <= 1 )
  {
    v16 = *(unsigned __int16 *)(a1 + 3864) + 2;
    goto LABEL_15;
  }
LABEL_16:
  ndisSetupWmiNode(a1, a2, v15, (__int128 *)v6, WnodeEventItem);
  v18 = WnodeEventItem[0];
  if ( WnodeEventItem[0] )
  {
    v19 = (unsigned int *)((char *)WnodeEventItem[0] + *((unsigned int *)WnodeEventItem[0] + 14));
    if ( (*(_DWORD *)(v6 + 24) & 0x200) != 0 )
    {
      *v19 = v15 - 4;
      v20 = v19 + 1;
      *v20 = 2621699;
      v20[1] = *(_DWORD *)(a1 + 4112);
      *((_QWORD *)v20 + 1) = *(_QWORD *)(a1 + 4080);
      v20[6] = *(_DWORD *)(a3 + 16);
      if ( *(_UNKNOWN **)(a3 + 32) == &ndisIntReqWmi )
        *((_QWORD *)v20 + 2) = *(_QWORD *)(a3 + 40);
      v20[7] = *(unsigned __int16 *)(a1 + 3864);
      v20[8] = v14 + 40;
      memmove((char *)v20 + (unsigned int)(v14 + 40), *(const void **)(a1 + 3872), *(unsigned __int16 *)(a1 + 3864));
      v19 = v20 + 10;
    }
    v21 = *(_DWORD *)(v6 + 24);
    if ( v13 )
    {
      if ( (v21 & 0x10) != 0 )
      {
        *v19++ = v13 / *(_DWORD *)(v6 + 20);
      }
      else if ( v25 == 1073807384 && (*(_DWORD *)(a3 + 24) & 4) != 0 )
      {
        v25 = 3;
        Src = &v25;
        v13 = 4;
      }
      memmove(v19, Src, v13);
      v19 = (unsigned int *)((char *)v19 + v13);
    }
    else if ( (v21 & 0x10) != 0 )
    {
      *v19++ = 0;
    }
    if ( v24 )
      memmove(v19, *(const void **)(a1 + 3872), *(unsigned __int16 *)(a1 + 3864));
    v22 = IoWMIWriteEvent(v18);
    if ( (v22 & 0x80000000) == 0 )
      return v22;
  }
  else
  {
    v22 = -1073741670;
  }
  if ( (unsigned __int8)byte_1C008371F >= 2u )
    WPP_SF_qD(51LL, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1, v22);
  if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
    Template_qqq(v17, (unsigned int)&IoWMIWriteEventFailed, a1 + 4064, v22, 125, 0);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  return v22;
}
