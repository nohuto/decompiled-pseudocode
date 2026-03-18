/*
 * XREFs of MiPickClusterForMappedFileFault @ 0x140110FE0
 * Callers:
 *     MiResolveMappedFileFault @ 0x14005D550 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiStartingOffset @ 0x140055230 (MiStartingOffset.c)
 *     MiObtainFaultCharges @ 0x14008F350 (MiObtainFaultCharges.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 */

unsigned __int64 __fastcall MiPickClusterForMappedFileFault(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  struct _KTHREAD *CurrentThread; // r11
  char v11; // r13
  unsigned __int64 v12; // r8
  unsigned __int64 v14; // rsi
  __int64 *v15; // rdi
  __int64 v16; // rbx
  unsigned __int64 v17; // r14
  unsigned int v18; // r10d
  unsigned __int64 Process; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 i; // rdi
  unsigned __int64 v22; // rbp
  __int64 v23; // r13
  unsigned int v24; // eax
  unsigned int v25; // r10d
  __int64 v26; // r11
  unsigned __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // rax
  unsigned __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v36; // [rsp+68h] [rbp+10h]
  unsigned __int64 v37; // [rsp+78h] [rbp+20h]

  v37 = a4;
  CurrentThread = KeGetCurrentThread();
  v11 = 1;
  v12 = 0LL;
  v14 = 1LL;
  v15 = *(__int64 **)(a2 + 200);
  v16 = *(_QWORD *)(a2 + 168);
  v17 = *(_QWORD *)(a2 + 224);
  v18 = *(_DWORD *)(a2 + 180);
  v36 = *v15;
  if ( (v16 & 0x400) == 0 )
    goto LABEL_8;
  if ( BYTE1(CurrentThread[1].Teb) )
    goto LABEL_8;
  Process = *(unsigned int *)(*v15 + 56);
  if ( (Process & 8) != 0 && LOBYTE(CurrentThread[1].Teb) != 2 )
    goto LABEL_8;
  if ( *(__int64 *)(a1 + 5568) < 128 )
    goto LABEL_8;
  v20 = *(_QWORD *)(a1 + 5504);
  if ( dword_14034F6D4 )
  {
    --dword_14034F6D4;
LABEL_8:
    i = v17;
    v22 = v17;
    goto LABEL_69;
  }
  if ( v20 <= 0x100 )
    goto LABEL_8;
  v22 = a4 + 8 * (*((unsigned int *)v15 + 11) - 1LL);
  if ( !a3 )
  {
    if ( (Process & 0x20) != 0 )
    {
      v18 = 4;
      if ( (v15[4] & 4) != 0 )
        v18 = 8;
    }
    else if ( !v18 )
    {
      v18 = LODWORD(CurrentThread[1].WaitListEntry.Flink) + 1;
    }
  }
  v23 = 8LL * v18;
  if ( v22 > v23 + v17 - 8 )
    v22 = v23 + v17 - 8;
  if ( a3 || (Process & 0x20000000) == 0 )
  {
    a4 = (unsigned int)dword_14034F6DC;
    v25 = 0;
  }
  else
  {
    v24 = MiStartingOffset(v15, v17, a5);
    a4 = (unsigned int)dword_14034F6DC;
    v25 = v24;
    Process = v24 & (dword_14034F6DC - 1);
    if ( v22 > v17 + 8 * (((unsigned int)(dword_14034F6DC - Process) >> 12) - 1LL) )
      v22 = v17 + 8 * (((unsigned int)(dword_14034F6DC - Process) >> 12) - 1LL);
  }
  v26 = 0x90482413000LL;
  if ( v22 > (v17 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) )
    v22 = v17 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
  v27 = v22;
  if ( v22 > v17 )
  {
    do
    {
      v28 = *(_QWORD *)v27;
      if ( v27 + v26 <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, v28)
        && (v28 & 1) != 0
        && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v29 = *(_QWORD *)(Process + 1520);
        if ( v29 )
        {
          v30 = *(_QWORD *)(v29 + 8 * ((v27 >> 3) & 0x1FF));
          if ( (v30 & 0x20) != 0 )
            v28 |= 0x20uLL;
          if ( (v30 & 0x42) != 0 )
            v28 |= 0x42uLL;
        }
      }
      if ( v28 == v16 )
      {
        ++v14;
      }
      else if ( v27 == v22 )
      {
        v22 -= 8LL;
      }
      v27 -= 8LL;
    }
    while ( v27 > v17 );
    a4 = (unsigned int)dword_14034F6DC;
  }
  v31 = v22 - v23 + 8;
  if ( v31 < v37 )
    v31 = v37;
  if ( v31 < (v17 & 0xFFFFFFFFFFFFF000uLL) )
    v31 = v17 & 0xFFFFFFFFFFFFF000uLL;
  if ( a3 || (*(_BYTE *)(a2 + 189) & 0x20) != 0 )
  {
    v31 = v17;
  }
  else if ( (*(_DWORD *)(v36 + 56) & 0x20000000) != 0 )
  {
    Process = (v25 >> 12) & ((unsigned int)(a4 - 1) >> 12);
    if ( v31 < v17 - 8 * Process )
      v31 = v17 - 8 * Process;
  }
  for ( i = v31; v31 < v17; v31 += 8LL )
  {
    v32 = *(_QWORD *)v31;
    if ( v31 + v26 <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, v32)
      && (v32 & 1) != 0
      && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      a4 = *(_QWORD *)(Process + 1520);
      if ( a4 )
      {
        v33 = *(_QWORD *)(a4 + 8 * ((v31 >> 3) & 0x1FF));
        if ( (v33 & 0x20) != 0 )
          v32 |= 0x20uLL;
        if ( (v33 & 0x42) != 0 )
          v32 |= 0x42uLL;
      }
    }
    if ( v32 == v16 )
    {
      ++v14;
    }
    else if ( v31 == i )
    {
      i += 8LL;
    }
  }
  v11 = 1;
  v12 = 0LL;
LABEL_69:
  if ( a6 == -1 )
    v11 = 3;
  else
    --v14;
  if ( v14 )
    v12 = MiObtainFaultCharges((__int16 *)a1, v14, v11, a4);
  if ( a6 != -1 )
    ++v12;
  *a7 = i;
  *a8 = v22;
  return v12;
}
