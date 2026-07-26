/*
 * XREFs of ndisGetPowerInfo @ 0x1C005BCF0
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C009B358 (ndisDeviceControlHandler.c)
 * Callees:
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     ?ndisXlateSSResume@@YA?AW4_NDIS_USER_RESUME_REASON@@T_NDIS_SS_RESUME_REASON@@@Z @ 0x1C005B864 (-ndisXlateSSResume@@YA-AW4_NDIS_USER_RESUME_REASON@@T_NDIS_SS_RESUME_REASON@@@Z.c)
 *     ndisGetListEntriesCount @ 0x1C00C82C4 (ndisGetListEntriesCount.c)
 *     ndisXlateMiniportFlags @ 0x1C00D04F0 (ndisXlateMiniportFlags.c)
 *     ndisXlatePnPFlags @ 0x1C00D052C (ndisXlatePnPFlags.c)
 */

__int64 __fastcall ndisGetPowerInfo(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  unsigned int v8; // eax
  _DWORD *v9; // rbx
  size_t v10; // r8
  const void **v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  int v15; // r8d
  int v16; // r8d
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbp
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // r8
  unsigned int v24; // eax
  KIRQL v25; // r9
  __int64 v26; // rdi
  KIRQL v27; // al
  __int64 result; // rax

  v4 = 0;
  v5 = a2[23];
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL) + 24LL) )
  {
    v8 = *(_DWORD *)(v5 + 8);
    v9 = (_DWORD *)a2[3];
    if ( v8 >= 0x35C )
    {
      memset(v9, 0, 0x35CuLL);
      *v9 = 47186560;
      v10 = 512LL;
      v11 = *(const void ***)(a1 + 3912);
      if ( *(_WORD *)v11 < 0x200u )
        v10 = *(unsigned __int16 *)v11;
      memmove((char *)v9 + 6, v11[1], v10);
      *((_BYTE *)v9 + 520) = *(_BYTE *)(a1 + 32);
      *((_BYTE *)v9 + 521) = *(_BYTE *)(a1 + 33);
      *((_BYTE *)v9 + 522) = *(_BYTE *)(a1 + 3188);
      *((_BYTE *)v9 + 523) = *(_BYTE *)(a1 + 3189);
      v12 = ndisXlateMiniportFlags(*(unsigned int *)(a1 + 120));
      v9[131] = v12;
      v14 = ndisXlatePnPFlags(*(unsigned int *)(a1 + 124), v13, v12);
      v16 = v14 | v15;
      v9[131] = v16;
      if ( *(int *)(a1 + 1872) < 0 )
        v9[131] = v16 | 0x8000;
      if ( (*(_DWORD *)(a1 + 2688) & 0x80u) != 0 )
        v9[131] |= 0x10000u;
      v17 = *(_QWORD *)(a1 + 3816);
      if ( *(_QWORD *)(v17 + 848) && *(_QWORD *)(v17 + 856) )
        v9[131] |= 0x20000u;
      if ( *(_QWORD *)(a1 + 4512) )
        v9[131] |= 0x40000u;
      if ( (*(_DWORD *)(a1 + 4484) & 0x10) != 0 )
        v9[131] |= 0x100000u;
      if ( (*(_DWORD *)(a1 + 4484) & 8) != 0 )
        v9[131] |= 0x200000u;
      v9[132] = *(_DWORD *)(a1 + 2256);
      v9[133] = *(_DWORD *)(a1 + 1520);
      v9[134] = *(_DWORD *)(a1 + 3924);
      v9[135] = *(_DWORD *)(a1 + 480);
      v9[136] = *(_DWORD *)(a1 + 344);
      v9[137] = *(_DWORD *)(a1 + 1832);
      v9[138] = *(_DWORD *)(a1 + 1836);
      v9[139] = *(_DWORD *)(a1 + 464);
      v9[140] = *(_DWORD *)(a1 + 1268);
      v9[141] = *(_DWORD *)(a1 + 1272);
      *((_BYTE *)v9 + 624) = *(_BYTE *)(a1 + 1288);
      v9[148] = *(_DWORD *)(a1 + 3920);
      *((_WORD *)v9 + 298) = *(_WORD *)(a1 + 3732);
      v9[145] = ndisGetListEntriesCount(a1 + 960);
      v9[146] = ndisGetListEntriesCount(a1 + 968);
      v9[147] = ndisGetListEntriesCount(a1 + 976);
      v9[150] = *(_DWORD *)(a1 + 3968) & 3;
      v9[151] = (*(_DWORD *)(a1 + 3968) >> 2) & 3;
      v9[152] = (*(_DWORD *)(a1 + 3968) >> 4) & 3;
      v9[153] = (*(_DWORD *)(a1 + 3968) >> 6) & 3;
      v9[154] = (*(_DWORD *)(a1 + 3968) >> 8) & 3;
      v9[155] = (*(_DWORD *)(a1 + 3968) >> 10) & 3;
      v18 = *(_DWORD *)(a1 + 3968);
      v9[142] = 720;
      v9[169] = (v18 >> 12) & 3;
      *((_OWORD *)v9 + 45) = *(_OWORD *)(a1 + 1000);
      *((_OWORD *)v9 + 46) = *(_OWORD *)(a1 + 1016);
      *((_OWORD *)v9 + 47) = *(_OWORD *)(a1 + 1032);
      *((_QWORD *)v9 + 96) = *(_QWORD *)(a1 + 1048);
      v9[194] = *(_DWORD *)(a1 + 1056);
      v19 = (unsigned int)(v9[142] + 60);
      v9[143] = v19;
      *(_OWORD *)((char *)v9 + v19) = *(_OWORD *)(a1 + 1060);
      *(_OWORD *)((char *)v9 + v19 + 16) = *(_OWORD *)(a1 + 1076);
      *(_OWORD *)((char *)v9 + v19 + 32) = *(_OWORD *)(a1 + 1092);
      *(_QWORD *)((char *)v9 + v19 + 48) = *(_QWORD *)(a1 + 1108);
      *(_DWORD *)((char *)v9 + (unsigned int)v19 + 56) = *(_DWORD *)(a1 + 1116);
      v20 = (unsigned int)(v9[143] + 60);
      v9[144] = v20;
      *(_OWORD *)((char *)v9 + v20) = *(_OWORD *)(a1 + 1120);
      *(_DWORD *)((char *)v9 + (unsigned int)v20 + 16) = *(_DWORD *)(a1 + 1136);
      v9[178] = *(_DWORD *)(a1 + 4528);
      v21 = *(_QWORD *)(a1 + 4512);
      if ( v21 )
      {
        v22 = (MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 4640)) / 10000LL - *(_QWORD *)(a1 + 4656);
        KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 4512));
        v9[157] = *(_DWORD *)(v21 + 8);
        *((_BYTE *)v9 + 632) = (*(_BYTE *)(v21 + 504) & 0x14) != 0;
        v9[159] = *(_DWORD *)(v21 + 644);
        v23 = *(_QWORD *)(v21 + 688);
        if ( (*(_DWORD *)(v21 + 504) & 0x10) != 0 )
          v23 += (MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v21 + 648)) / 10000LL;
        v24 = *(_DWORD *)(v21 + 644);
        if ( v24 )
        {
          v9[160] = *(_QWORD *)(v21 + 672) / (unsigned __int64)v24;
          *((_QWORD *)v9 + 81) = v23 / *(unsigned int *)(v21 + 644);
        }
        if ( v22 )
          v9[164] = 100 * v23 / v22;
        v9[165] = ndisXlateSSResume(*(_DWORD *)(v21 + 628));
        v9[166] = *(_DWORD *)(v21 + 632);
        v9[167] = ndisXlateSSResume(*(_DWORD *)(v21 + 636));
        v9[168] = *(_DWORD *)(v21 + 640);
        KeReleaseSpinLock((PKSPIN_LOCK)v21, v25);
      }
      v26 = *(_QWORD *)(a1 + 4520);
      if ( v26 )
      {
        v9[131] |= 0x80000u;
        v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v26);
        *((_BYTE *)v9 + 680) = *(_DWORD *)(v26 + 368) == 2;
        v9[171] = *(_DWORD *)(v26 + 52);
        *((_BYTE *)v9 + 688) = *(_DWORD *)(v26 + 372) != 0;
        *((_QWORD *)v9 + 87) = ndisAoAcMaxStartToRefTime;
        *((_QWORD *)v9 + 88) = ndisAoAcMaxWakeToRefTime;
        KeReleaseSpinLock((PKSPIN_LOCK)v26, v27);
      }
      a2[7] = 860LL;
    }
    else
    {
      a2[7] = 0LL;
      v4 = -1073676268;
      if ( v8 >= 4 )
      {
        *v9 = 56361600;
        a2[7] = 4LL;
      }
    }
  }
  else
  {
    v4 = -1073741790;
  }
  result = v4;
  *a3 = v4;
  return result;
}
