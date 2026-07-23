/*
 * XREFs of RtlpExtendedHeapInformationGenerator @ 0x1800E9CB0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlpExtendedHeapInformationGenerator(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  void *v8; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  _OWORD *v17; // r8
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rcx
  _OWORD *v21; // rdx

  switch ( *(_DWORD *)a1 )
  {
    case 1:
      v21 = (_OWORD *)((a2[10] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
      a2[10] = v21;
      if ( (unsigned __int64)(v21 + 2) <= a2[11] )
      {
        *v21 = *(_OWORD *)(a1 + 16);
        v21[1] = *(_OWORD *)(a1 + 32);
        a2[1] = a2[10];
      }
      a2[10] += 32LL;
      return 0LL;
    case 2:
      v17 = (_OWORD *)((a2[10] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
      a2[10] = v17;
      if ( (unsigned __int64)(v17 + 3) <= a2[11] )
      {
        *v17 = *(_OWORD *)(a1 + 16);
        v17[1] = *(_OWORD *)(a1 + 32);
        v17[2] = *(_OWORD *)(a1 + 48);
        v18 = a2[1];
        if ( v18 )
        {
          v19 = a2[10] - a2[9];
          v20 = a2[2];
          if ( v20 )
            *(_QWORD *)(v20 + 40) = v19;
          else
            *(_QWORD *)(v18 + 24) = v19;
          a2[2] = a2[10];
        }
        a2[3] = a2[10];
      }
      a2[10] += 48LL;
      break;
    case 3:
      v14 = (a2[10] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
      a2[10] = v14;
      if ( v14 + 40 <= a2[11] )
      {
        *(_OWORD *)v14 = *(_OWORD *)(a1 + 16);
        *(_OWORD *)(v14 + 16) = *(_OWORD *)(a1 + 32);
        *(_QWORD *)(v14 + 32) = *(_QWORD *)(a1 + 48);
        v15 = a2[4];
        if ( v15 )
          *(_QWORD *)(v15 + 32) = a2[10] - a2[9];
        else
          *(_QWORD *)(a2[3] + 32LL) = a2[10] - a2[9];
        v16 = a2[10];
        a2[4] = v16;
        a2[5] = v16;
      }
      a2[10] += 40LL;
      goto LABEL_44;
    case 4:
      v11 = (a2[10] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
      a2[10] = v11;
      if ( v11 + 40 <= a2[11] )
      {
        *(_OWORD *)v11 = *(_OWORD *)(a1 + 16);
        *(_OWORD *)(v11 + 16) = *(_OWORD *)(a1 + 32);
        *(_QWORD *)(v11 + 32) = *(_QWORD *)(a1 + 48);
        v12 = a2[6];
        if ( v12 )
          *(_QWORD *)(v12 + 32) = a2[10] - a2[9];
        else
          *(_QWORD *)(a2[5] + 24LL) = a2[10] - a2[9];
        v13 = a2[10];
        a2[6] = v13;
        a2[7] = v13;
      }
      a2[10] += 40LL;
      goto LABEL_45;
    case 5:
      v8 = (void *)((a2[10] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
      a2[10] = v8;
      v9 = *(_QWORD *)(a1 + 8) - 16LL;
      if ( (unsigned __int64)v8 + v9 >= v9 && (unsigned __int64)v8 + v9 <= a2[11] )
      {
        memmove(v8, (const void *)(a1 + 16), *(_QWORD *)(a1 + 8) - 16LL);
        v10 = a2[8];
        if ( v10 )
          *(_QWORD *)(v10 + 32) = a2[10] - a2[9];
        else
          *(_QWORD *)(a2[7] + 24LL) = a2[10] - a2[9];
        a2[8] = a2[10];
      }
      a2[10] += v9;
      return 0LL;
    case 0x80000000:
      v4 = (a2[10] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
      a2[10] = v4;
      if ( v4 + 152 <= a2[11] )
      {
        *(_OWORD *)v4 = *(_OWORD *)(a1 + 16);
        *(_OWORD *)(v4 + 16) = *(_OWORD *)(a1 + 32);
        *(_OWORD *)(v4 + 32) = *(_OWORD *)(a1 + 48);
        *(_OWORD *)(v4 + 48) = *(_OWORD *)(a1 + 64);
        *(_OWORD *)(v4 + 64) = *(_OWORD *)(a1 + 80);
        *(_OWORD *)(v4 + 80) = *(_OWORD *)(a1 + 96);
        *(_OWORD *)(v4 + 96) = *(_OWORD *)(a1 + 112);
        *(_OWORD *)(v4 + 112) = *(_OWORD *)(a1 + 128);
        *(_OWORD *)(v4 + 128) = *(_OWORD *)(a1 + 144);
        *(_QWORD *)(v4 + 144) = *(_QWORD *)(a1 + 160);
        v5 = a2[1];
        if ( v5 )
        {
          v6 = a2[10] - a2[9];
          v7 = a2[2];
          if ( v7 )
            *(_QWORD *)(v7 + 40) = v6;
          else
            *(_QWORD *)(v5 + 24) = v6;
          a2[2] = a2[10];
        }
        a2[3] = a2[10];
      }
      a2[10] += 152LL;
      break;
    default:
      return 3221225485LL;
  }
  a2[4] = 0LL;
  a2[5] = 0LL;
LABEL_44:
  a2[6] = 0LL;
  a2[7] = 0LL;
LABEL_45:
  a2[8] = 0LL;
  return 0LL;
}
