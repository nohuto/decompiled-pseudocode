/*
 * XREFs of PopRestoreHiberContext @ 0x1403A2150
 * Callers:
 *     PopHandleNextState @ 0x1403A0B10 (PopHandleNextState.c)
 * Callees:
 *     IoNotifyDump @ 0x140119D7C (IoNotifyDump.c)
 *     IoInitializeDumpStack @ 0x140119DBC (IoInitializeDumpStack.c)
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PopInternalAddToDumpFile @ 0x1401E66D8 (PopInternalAddToDumpFile.c)
 *     PopHiberReadChecksums @ 0x1403A0E54 (PopHiberReadChecksums.c)
 *     PopDecompressHiberBlocks @ 0x1403A2574 (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x1403A2D00 (PopRequestRead.c)
 *     BgLibraryInitialize @ 0x1406D9CE8 (BgLibraryInitialize.c)
 */

struct _KPRCB *__fastcall PopRestoreHiberContext(ULONG_PTR BugCheckParameter3)
{
  struct _KPRCB *result; // rax
  unsigned int Number; // edi
  unsigned __int64 v4; // r12
  _QWORD *v5; // rax
  _DWORD *v6; // rsi
  __int64 v7; // r14
  int v8; // ebp
  __int64 v9; // rdi
  int v10; // eax
  ULONG_PTR v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  void (*v15)(void); // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // r9
  __int64 v19; // r10
  unsigned int v20; // r11d
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rbp
  __int64 v24; // r14
  unsigned __int64 v25; // rdx
  __int64 v26; // r11
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rsi
  int v30; // eax
  char v31; // cl
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  _QWORD v34[11]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+90h] [rbp+8h]

  result = KeGetCurrentPrcb();
  Number = result->Number;
  if ( Number >= *(_DWORD *)(BugCheckParameter3 + 264) )
    return result;
  v4 = 0LL;
  *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 272) + ((unsigned __int64)Number << 7) + 80) = 0LL;
  if ( Number == *(_DWORD *)(BugCheckParameter3 + 192) )
  {
    byte_140305B50 = 0;
    v29 = __rdtsc();
    if ( Address )
    {
      v30 = BgLibraryInitialize(Address, 0xFFFFFFFFLL);
      v31 = byte_140305B50;
      if ( v30 >= 0 )
        v31 = 1;
      byte_140305B50 = v31;
    }
    v32 = __rdtsc();
    qword_1402DE770 += (((unsigned __int64)HIDWORD(v32) << 32) | (unsigned int)v32) - v29;
  }
  if ( !Number )
  {
    v35 = __rdtsc();
    v5 = *(_QWORD **)(BugCheckParameter3 + 200);
    if ( v5[11] == v5[66] )
      *(_QWORD *)(BugCheckParameter3 + 408) = v5[69];
    else
      *(_QWORD *)(BugCheckParameter3 + 408) = 0LL;
    v6 = qword_1402DE378;
    v7 = *(_QWORD *)(BugCheckParameter3 + 408);
    v8 = *(_DWORD *)(BugCheckParameter3 + 288);
    v9 = *(_QWORD *)(BugCheckParameter3 + 280);
    memset(qword_1402DE378, 0, 0x40uLL);
    v6[6] = 0;
    *(_QWORD *)v6 = v9;
    v6[2] = v8;
    *((_QWORD *)v6 + 2) = v7;
    *(_BYTE *)(BugCheckParameter3 + 5) = 1;
    IoNotifyDump(2);
    if ( *(_QWORD *)(BugCheckParameter3 + 408) )
    {
      *(_DWORD *)(BugCheckParameter3 + 184) = 9;
      *(_QWORD *)(BugCheckParameter3 + 160) = v34;
      v34[0] = qword_1402DE2F8;
      v34[1] = qword_1402DE2F8;
      v34[2] = 0LL;
      off_1402D28C8();
      v10 = IoInitializeDumpStack(*(_QWORD *)(BugCheckParameter3 + 168));
      v11 = v10;
      if ( v10 < 0 || PopSimulateHiberBugcheck == 4 )
      {
        PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0xCuLL, v11, *(_QWORD *)(BugCheckParameter3 + 168), 0LL);
      }
      v12 = __rdtsc();
      qword_1402DE750 = (((unsigned __int64)HIDWORD(v12) << 32) | (unsigned int)v12) - v35;
      v13 = *(_QWORD *)(BugCheckParameter3 + 168);
      *(_DWORD *)(BugCheckParameter3 + 336) = 0;
      *(_QWORD *)(BugCheckParameter3 + 352) = 0LL;
      if ( *(_QWORD *)(v13 + 128) )
        *(_BYTE *)(BugCheckParameter3 + 400) = 1;
      PopHiberReadChecksums(BugCheckParameter3);
      v14 = *(_QWORD *)(BugCheckParameter3 + 200);
      *(_DWORD *)(BugCheckParameter3 + 184) = 10;
      *(_QWORD *)(BugCheckParameter3 + 384) = *(_QWORD *)(v14 + 112) << 12;
      while ( *(_QWORD *)(BugCheckParameter3 + 408) )
      {
        PopRequestRead(BugCheckParameter3);
        if ( (unsigned int)PopDecompressHiberBlocks(BugCheckParameter3, (__int64)PopDecompressCallback) == -2147483614
          && !*(_DWORD *)(BugCheckParameter3 + 336) )
        {
          _mm_pause();
        }
      }
      PopDecompressHiberBlocks(BugCheckParameter3, 0LL);
      v15 = *(void (**)(void))(*(_QWORD *)(BugCheckParameter3 + 168) + 72LL);
      if ( v15 )
        v15();
    }
    IoNotifyDump(3);
    _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 16), 1u);
    while ( *(_DWORD *)(BugCheckParameter3 + 16) != *(_DWORD *)(BugCheckParameter3 + 264) )
      _mm_pause();
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0;
    if ( *(_DWORD *)(BugCheckParameter3 + 264) )
    {
      v21 = *(_QWORD *)(BugCheckParameter3 + 272);
      v22 = qword_1402DE768;
      v23 = qword_1402DE740;
      v24 = qword_1402DE730;
      do
      {
        v25 = (unsigned __int64)v20 << 7;
        v24 += *(_QWORD *)(v25 + v21 + 64);
        qword_1402DE730 = v24;
        v23 += *(_QWORD *)(v25 + *(_QWORD *)(BugCheckParameter3 + 272) + 72);
        qword_1402DE740 = v23;
        v22 += *(_QWORD *)(v25 + *(_QWORD *)(BugCheckParameter3 + 272) + 80);
        qword_1402DE768 = v22;
        v21 = *(_QWORD *)(BugCheckParameter3 + 272);
        if ( *(_QWORD *)(v25 + v21 + 64) + *(_QWORD *)(v25 + v21 + 72) > v4 )
          v4 = *(_QWORD *)(v25 + v21 + 64) + *(_QWORD *)(v25 + v21 + 72);
        v16 += *(_QWORD *)(v25 + v21 + 88);
        v17 += *(_QWORD *)(v25 + v21 + 96);
        ++v20;
        v18 += *(_QWORD *)(v25 + v21 + 104);
        v19 += *(_QWORD *)(v25 + v21 + 112);
      }
      while ( v20 < *(_DWORD *)(BugCheckParameter3 + 264) );
    }
    v26 = v16 / (v18 + 1);
    v27 = v17 / (v19 + 1);
    if ( v27 > v26 )
    {
      v33 = 100 * (qword_1402DE738 * *(unsigned int *)(BugCheckParameter3 + 264) / (v19 + v18 + 1) - v26) / (v27 - v26);
      if ( v33 > 99 )
      {
        dword_1402DE324 = 99;
        goto LABEL_32;
      }
      dword_1402DE324 = v33;
      if ( (int)v33 >= 1 )
        goto LABEL_32;
    }
    dword_1402DE324 = 1;
LABEL_32:
    v28 = __rdtsc();
    qword_1402DE758 = (((unsigned __int64)HIDWORD(v28) << 32) | (unsigned int)v28) - v35;
    result = (struct _KPRCB *)(qword_1402DE758 - qword_1402DE750 - v4);
    qword_1402DE728 = (__int64)result;
    return result;
  }
  while ( !*(_BYTE *)(BugCheckParameter3 + 5) )
    _mm_pause();
  result = (struct _KPRCB *)PopDecompressHiberBlocks(BugCheckParameter3, 0LL);
  _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 16), 1u);
  return result;
}
