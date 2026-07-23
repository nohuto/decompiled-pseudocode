/*
 * XREFs of HvCheckBin @ 0x14042DE90
 * Callers:
 *     HvCheckHive @ 0x1404F6984 (HvCheckHive.c)
 * Callees:
 *     RtlSetBits @ 0x140027FA0 (RtlSetBits.c)
 *     SetFailureLocation @ 0x1401B29DC (SetFailureLocation.c)
 *     HvMoveLayoutStats @ 0x14042E93C (HvMoveLayoutStats.c)
 *     HvAddToLayoutStats @ 0x1404CB2E0 (HvAddToLayoutStats.c)
 */

__int64 __fastcall HvCheckBin(__int64 a1, _DWORD *a2, _DWORD *a3, _RTL_BITMAP *a4, __int64 a5)
{
  __int64 v5; // r10
  unsigned int v7; // r9d
  unsigned int v8; // r14d
  int v9; // r12d
  __int64 v12; // rcx
  int *v13; // rbx
  char *v14; // r8
  __int16 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rdx
  int *v18; // rdi
  __int64 v19; // r8
  char v21; // al
  unsigned int v22; // [rsp+70h] [rbp+8h]
  __int64 v23; // [rsp+78h] [rbp+10h]

  v5 = *(_QWORD *)(a1 + 56);
  v7 = 0;
  v23 = v5;
  v8 = 0;
  v22 = 0;
  v9 = 0;
  if ( v5 )
    *(_QWORD *)(v5 + 328) = a2;
  v12 = (unsigned int)a2[2];
  v13 = a2 + 8;
  v14 = (char *)a2 + v12;
  if ( a2 + 8 >= (_DWORD *)((char *)a2 + v12) )
  {
LABEL_15:
    v19 = (unsigned int)a2[2];
    if ( v8 + v7 + 32LL == v19 )
    {
      if ( v13 == (_DWORD *)((char *)a2 + v19) )
      {
        if ( a3 )
          *a3 += v9;
        return 0LL;
      }
      else
      {
        SetFailureLocation(v5, 0, 17, 1000, 112);
        return 1000LL;
      }
    }
    else
    {
      SetFailureLocation(v5, 0, 17, 995, 96);
      return 995LL;
    }
  }
  v15 = 27502;
  while ( 1 )
  {
    v16 = *v13;
    if ( (int)v16 < 0 )
    {
      v17 = (unsigned int)-(int)v16;
      if ( (unsigned int)v17 > (unsigned int)v12 || (v18 = (int *)((char *)v13 + v17), (char *)v13 + v17 > v14) )
      {
        if ( v23 )
        {
          SetFailureLocation(v23, 0, 17, 40, 32);
          *(_QWORD *)(v23 + 336) = v13;
        }
        return 40LL;
      }
      v8 += v17;
      v9 = v17 + v9 - 4;
      if ( v8 > (unsigned int)v12 )
      {
        if ( v23 )
        {
          SetFailureLocation(v23, 0, 17, 50, 48);
          *(_QWORD *)(v23 + 336) = v13;
        }
        return 50LL;
      }
      if ( a5 && (unsigned int)v17 >= 0x54uLL && *((_WORD *)v13 + 2) == v15 )
      {
        v21 = *((_BYTE *)v13 + 16);
        if ( (v21 & 2) != 0 )
        {
          HvMoveLayoutStats(a5 + 32);
          HvMoveLayoutStats(a5 + 16);
          *(_QWORD *)(a5 + 48) = 0LL;
        }
        else if ( (v21 & 1) != 0 )
        {
          HvAddToLayoutStats(a5 + 32);
          HvMoveLayoutStats(a5 + 16);
          if ( !*(_DWORD *)(a5 + 48) )
            *(_DWORD *)(a5 + 48) = a2[1];
          *(_DWORD *)(a5 + 52) = 0;
        }
        else
        {
          HvAddToLayoutStats(a5 + 16);
          if ( !*(_DWORD *)(a5 + 52) )
            *(_DWORD *)(a5 + 52) = a2[1];
        }
      }
      if ( a4 )
      {
        RtlSetBits(a4, (unsigned int)((_DWORD)v13 + a2[1] - (_DWORD)a2) >> 3, 1u);
        v7 = v22;
        v15 = 27502;
      }
      goto LABEL_13;
    }
    if ( (unsigned int)v16 > (unsigned int)v12 || (char *)v13 + v16 > v14 || !(_DWORD)v16 )
      break;
    v7 += v16;
    v22 = v7;
    if ( v7 > (unsigned int)v12 )
    {
      if ( v23 )
      {
        SetFailureLocation(v23, 0, 17, 70, 80);
        *(_QWORD *)(v23 + 336) = v13;
      }
      return 70LL;
    }
    if ( a5 )
    {
      HvAddToLayoutStats(a5);
      ((void (*)(void))HvMoveLayoutStats)();
    }
    v18 = (int *)((char *)v13 + *v13);
LABEL_13:
    v12 = (unsigned int)a2[2];
    v13 = v18;
    v14 = (char *)a2 + v12;
    if ( v18 >= (_DWORD *)((char *)a2 + v12) )
    {
      v5 = v23;
      goto LABEL_15;
    }
  }
  if ( v23 )
  {
    SetFailureLocation(v23, 0, 17, 60, 64);
    *(_QWORD *)(v23 + 336) = v13;
  }
  return 60LL;
}
