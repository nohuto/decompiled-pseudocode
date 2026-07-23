/*
 * XREFs of ?VerifyPartitionTable@PC_GPT@@QEAAJE@Z @ 0x14023C4F0
 * Callers:
 *     PcVerifyPartitionTable @ 0x14023B670 (PcVerifyPartitionTable.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140110510 (RtlComputeCrc32.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ?ReadEntries@PC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z @ 0x14023C06C (-ReadEntries@PC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadHeader@PC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x14023C0EC (-ReadHeader@PC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?WriteSectors@PC_DISK@@QEAAJK_KPEAX@Z @ 0x14023CBA0 (-WriteSectors@PC_DISK@@QEAAJK_KPEAX@Z.c)
 *     PspQueueApcSpecialApc @ 0x1403E6870 (PspQueueApcSpecialApc.c)
 *     ?AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z @ 0x140575378 (-AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z.c)
 */

__int64 __fastcall PC_GPT::VerifyPartitionTable(PC_DISK **this, char a2)
{
  __int16 *v2; // r15
  unsigned int v3; // esi
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rdi
  int v8; // edx
  __int64 v9; // r12
  UCHAR *Pool; // rax
  UCHAR *v11; // rdi
  UCHAR *v12; // r12
  char v13; // r9
  unsigned int v14; // ebx
  __int64 v15; // r8
  int v16; // edx
  int v17; // ecx
  _BOOL8 v18; // r15
  BOOL v19; // esi
  PUCHAR v20; // rbx
  int v21; // eax
  unsigned int v22; // edi
  __int64 v23; // rax
  unsigned int v24; // edi
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned __int64 v27; // r8
  PUCHAR v28; // r9
  PVOID *v29; // rdi
  PUCHAR Buffer[2]; // [rsp+20h] [rbp-30h]
  void *v32[2]; // [rsp+30h] [rbp-20h]
  __int128 v33; // [rsp+40h] [rbp-10h] BYREF
  __int16 v35; // [rsp+A0h] [rbp+50h] BYREF

  v35 = 0;
  v2 = &v35;
  v3 = 0;
  v33 = 0LL;
  v5 = 0LL;
  v6 = 2LL;
  *(_OWORD *)v32 = 0LL;
  *(_OWORD *)Buffer = 0LL;
  do
  {
    v7 = *((_QWORD *)*this + 6);
    Buffer[v5] = (PUCHAR)v7;
    if ( (int)PC_GPT::ReadHeader(this, v3, (struct GPT_HEADER *)v7) >= 0 )
    {
      v8 = *((_DWORD *)*this + 7);
      v9 = ~(v8 - 1) & (unsigned int)(*(_DWORD *)(v7 + 80) * *(_DWORD *)(v7 + 84) + v8 - 1);
      Pool = (UCHAR *)PC_ENVIRONMENT::AllocatePool((1 << *((_DWORD *)*this + 10)) + (int)v9, v8, 0x54506350u);
      *(_QWORD *)((char *)&v33 + v5 * 8) = Pool;
      v11 = Pool;
      if ( !Pool )
      {
        v14 = -1073741670;
        goto LABEL_33;
      }
      if ( v3 )
      {
        v12 = Pool;
        Buffer[v5] = Pool;
        v11 = &Pool[1 << *((_DWORD *)*this + 10)];
        v32[v5] = v11;
      }
      else
      {
        v12 = &Pool[v9];
        v32[v5] = Pool;
        Buffer[v5] = v12;
      }
      memmove(v12, *((const void **)*this + 6), 1 << *((_DWORD *)*this + 10));
      if ( (int)PC_GPT::ReadEntries(this, (struct GPT_HEADER *)v12, (struct _GPT_ENTRY *)v11) >= 0 )
        *(_BYTE *)v2 = 1;
    }
    ++v3;
    ++v5;
    v2 = (__int16 *)((char *)v2 + 1);
  }
  while ( v3 < 2 );
  v13 = v35;
  v14 = 0;
  if ( (_BYTE)v35 )
  {
    if ( HIBYTE(v35)
      && *((_QWORD *)Buffer[1] + 3) == *((_QWORD *)Buffer[0] + 4)
      && *((_QWORD *)Buffer[1] + 4) == *((_QWORD *)Buffer[0] + 3)
      && *((_QWORD *)Buffer[1] + 5) == *((_QWORD *)Buffer[0] + 5)
      && *((_QWORD *)Buffer[1] + 6) == *((_QWORD *)Buffer[0] + 6)
      && *((_DWORD *)Buffer[1] + 20) == *((_DWORD *)Buffer[0] + 20)
      && *((_DWORD *)Buffer[1] + 21) == *((_DWORD *)Buffer[0] + 21)
      && *((_DWORD *)Buffer[1] + 22) == *((_DWORD *)Buffer[0] + 22) )
    {
      v15 = *((_QWORD *)Buffer[1] + 7) - *((_QWORD *)Buffer[0] + 7);
      if ( !v15 )
        v15 = *((_QWORD *)Buffer[1] + 8) - *((_QWORD *)Buffer[0] + 8);
      if ( !v15 )
        goto LABEL_33;
    }
  }
  else if ( !HIBYTE(v35) )
  {
LABEL_12:
    v14 = -1073741774;
    goto LABEL_33;
  }
  if ( !a2 )
    goto LABEL_12;
  v16 = *((_DWORD *)*this + 7);
  v17 = *((_DWORD *)*this + 10);
  v18 = (_BYTE)v35 == 0;
  v19 = (_BYTE)v35 != 0;
  v20 = Buffer[v18];
  v21 = *((_DWORD *)v20 + 20) * *((_DWORD *)v20 + 21);
  *((_DWORD *)v20 + 4) = 0;
  v22 = ~(v16 - 1) & (v21 + v16 - 1);
  v23 = *((_QWORD *)v20 + 4);
  v24 = v22 >> v17;
  v25 = *((_QWORD *)v20 + 3);
  *((_QWORD *)v20 + 3) = v23;
  *((_QWORD *)v20 + 4) = v25;
  if ( v13 )
    v26 = *((_QWORD *)v20 + 3) - v24;
  else
    v26 = v23 + 1;
  *((_QWORD *)v20 + 9) = v26;
  *((_DWORD *)v20 + 4) = RtlComputeCrc32(0, v20, *((_DWORD *)v20 + 3));
  if ( v19 )
  {
    v28 = (PUCHAR)v32[v18];
    v27 = *((_QWORD *)v20 + 9);
  }
  else
  {
    v27 = *((_QWORD *)v20 + 3);
    v28 = v20;
  }
  v14 = PC_DISK::WriteSectors(*this, v24 + 1, v27, v28);
LABEL_33:
  v29 = (PVOID *)&v33;
  do
  {
    if ( *v29 )
      PspQueueApcSpecialApc(*v29);
    ++v29;
    --v6;
  }
  while ( v6 );
  return v14;
}
