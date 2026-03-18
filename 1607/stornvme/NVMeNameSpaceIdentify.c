/*
 * XREFs of NVMeNameSpaceIdentify @ 0x1C000DA70
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C0006D5C (NVMeControllerInitPart1.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002690 (ProcessCommand.c)
 *     memset @ 0x1C0003180 (memset.c)
 *     IsDumpMode @ 0x1C00047BC (IsDumpMode.c)
 *     IsIntelChatham @ 0x1C00047C8 (IsIntelChatham.c)
 *     NVMeZeroMemory @ 0x1C000505C (NVMeZeroMemory.c)
 *     LocalCommandReuse @ 0x1C000C838 (LocalCommandReuse.c)
 *     NVMeVersionCheck @ 0x1C000E6D0 (NVMeVersionCheck.c)
 *     WaitForCommandComplete @ 0x1C000ECF8 (WaitForCommandComplete.c)
 */

__int64 __fastcall NVMeNameSpaceIdentify(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rsi
  unsigned int v4; // r15d
  unsigned int v5; // ebp
  __int64 v6; // rcx
  unsigned int k; // r14d
  __int64 v8; // rcx
  int j; // edx
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // r14d
  __int64 v14; // rcx
  int i; // edx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  char *v21; // rdx
  __int128 v22; // xmm0
  int v23; // [rsp+70h] [rbp+8h]
  char *v24; // [rsp+78h] [rbp+10h]

  result = *(_QWORD *)(a1 + 1080);
  v2 = *(_QWORD **)(a1 + 1168);
  v4 = 0;
  v5 = *(_DWORD *)(result + 516);
  if ( v5 )
  {
    if ( v5 > 0xFF )
      v5 = 255;
    result = IsDumpMode(a1);
    if ( (_BYTE)result )
    {
      v24 = *(char **)(v6 + 1096);
      *(_QWORD *)(a1 + 1096) = v24 + 104;
      memset(v24, 0, 0x68uLL);
      v13 = 1;
      do
      {
        if ( !IsDumpMode(a1) || *(_DWORD *)(a1 + 152) == v13 )
        {
          LocalCommandReuse(v14, a1 + 560);
          for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4245LL) |= i )
            ++i;
          *(_WORD *)(*(_QWORD *)(a1 + 656) + 4236LL) = 0;
          v16 = *(_QWORD *)(a1 + 656) + 4096LL;
          *(_QWORD *)(v16 + 24) = *(_QWORD *)(a1 + 1176);
          *(_BYTE *)v16 = 6;
          v17 = (*(_DWORD *)(v16 + 40) ^ (v13 == 0)) & 3;
          *(_DWORD *)(v16 + 4) = v13;
          *(_DWORD *)(v16 + 40) ^= v17;
          ProcessCommand(a1, a1 + 568);
          LOBYTE(v18) = 1;
          WaitForCommandComplete(a1, a1 + 568, v18);
          if ( IsIntelChatham(a1) )
          {
            HIBYTE(v23) = *((_BYTE *)v2 + 384);
            BYTE2(v23) = *((_BYTE *)v2 + 385);
            BYTE1(v23) = *((_BYTE *)v2 + 386);
            LOBYTE(v23) = *((_BYTE *)v2 + 387);
            if ( v23 != -559038737 && v13 == 1 )
            {
              memset(v2, 0, 0x1000uLL);
              *v2 = 67108336LL;
              v2[1] = 67108336LL;
              v2[2] = 67108336LL;
              *((_BYTE *)v2 + 130) = 9;
            }
          }
          if ( *(_BYTE *)(a1 + 571) == 1
            && (IsDumpMode(a1)
             || v5 <= 1
             || !(unsigned __int8)NVMeVersionCheck(v19)
             || *((_BYTE *)v2 + 4 * (*((_BYTE *)v2 + 26) & 0xF) + 130)
             || *v2) )
          {
            v20 = v4;
            v21 = &v24[104 * v4];
            v21[72] = *((_BYTE *)v2 + 26) & 0xF;
            *((_DWORD *)v21 + 12) = *((_DWORD *)v2 + (*((_BYTE *)v2 + 26) & 0xF) + 32);
            *((_DWORD *)v21 + 13) = 1 << v21[50];
            *((_QWORD *)v21 + 7) = *v2;
            v21[73] = v2[3] & 1;
            v21[74] = *((_BYTE *)v2 + 29) & 7;
            *(_QWORD *)(v21 + 92) = v2[15];
            v22 = *(_OWORD *)(v2 + 13);
            v21[10] = v4++;
            *(_DWORD *)v21 = 1;
            *(_OWORD *)(v21 + 76) = v22;
            *((_DWORD *)v21 + 1) = 4;
            *((_WORD *)v21 + 4) = 0;
            *((_DWORD *)v21 + 4) = v13;
            *(_QWORD *)(a1 + 8 * v20 + 1184) = v21;
          }
          result = IsDumpMode(a1);
          if ( (_BYTE)result )
            break;
        }
        result = v13++;
      }
      while ( (unsigned int)result < v5 );
      *(_DWORD *)(a1 + 148) = v4;
    }
    else
    {
      k = v5;
      if ( v5 > 1 )
      {
        result = ((__int64 (*)(void))NVMeVersionCheck)();
        if ( (_BYTE)result )
        {
          LocalCommandReuse(v8, v8 + 560);
          for ( j = 0; j < 2; *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4245LL) |= j )
            ++j;
          *(_WORD *)(*(_QWORD *)(a1 + 656) + 4236LL) = 0;
          v10 = *(_QWORD *)(a1 + 656);
          *(_QWORD *)(v10 + 4120) = *(_QWORD *)(a1 + 1176);
          v11 = *(_DWORD *)(v10 + 4136) & 0xFFFFFFFE;
          *(_BYTE *)(v10 + 4096) = 6;
          *(_DWORD *)(v10 + 4100) = 0;
          *(_DWORD *)(v10 + 4136) = v11 | 2;
          ProcessCommand(a1, a1 + 568);
          LOBYTE(v12) = 1;
          result = WaitForCommandComplete(a1, a1 + 568, v12);
          if ( *(_BYTE *)(a1 + 571) == 1 )
          {
            result = *(_QWORD *)(a1 + 1168);
            for ( k = 0; k < v5; ++k )
            {
              if ( !*(_DWORD *)result )
                break;
              result += 4LL;
            }
          }
        }
      }
      if ( k )
        return StorPortExtendedFunction(0LL, a1, 104 * k);
    }
  }
  return result;
}
