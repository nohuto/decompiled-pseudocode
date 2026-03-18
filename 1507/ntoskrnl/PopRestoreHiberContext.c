/*
 * XREFs of PopRestoreHiberContext @ 0x1403F4F20
 * Callers:
 *     PopHandleNextState @ 0x1403F3750 (PopHandleNextState.c)
 * Callees:
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     IoNotifyDump @ 0x14014EBE0 (IoNotifyDump.c)
 *     IoInitializeDumpStack @ 0x14014ECB8 (IoInitializeDumpStack.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PopInternalAddToDumpFile @ 0x140233810 (PopInternalAddToDumpFile.c)
 *     PopHiberReadChecksums @ 0x1403F3B20 (PopHiberReadChecksums.c)
 *     PopDecompressHiberBlocks @ 0x1403F53D4 (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x1403F5BC4 (PopRequestRead.c)
 *     BgLibraryInitialize @ 0x14075CD30 (BgLibraryInitialize.c)
 */

struct _KPRCB *__fastcall PopRestoreHiberContext(ULONG_PTR BugCheckParameter3)
{
  struct _KPRCB *result; // rax
  unsigned int Number; // edi
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rsi
  int v6; // eax
  char v7; // cl
  unsigned __int64 v8; // rax
  _QWORD *v9; // rax
  _DWORD *v10; // rsi
  __int64 v11; // r14
  int v12; // ebp
  __int64 v13; // rdi
  int v14; // eax
  ULONG_PTR v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  void (*v19)(void); // rcx
  __int64 v20; // r8
  __int64 v21; // rdi
  __int64 v22; // r9
  __int64 v23; // r10
  unsigned int v24; // r11d
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rbp
  __int64 v28; // r14
  unsigned __int64 v29; // rdx
  __int64 v30; // r11
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  _QWORD v34[11]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+90h] [rbp+8h]

  result = KeGetCurrentPrcb();
  Number = result->Number;
  if ( Number < *(_DWORD *)(BugCheckParameter3 + 264) )
  {
    v4 = 0LL;
    *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 272) + ((unsigned __int64)Number << 7) + 80) = 0LL;
    if ( Number == *(_DWORD *)(BugCheckParameter3 + 192) )
    {
      byte_1403538D0 = 0;
      v5 = __rdtsc();
      if ( Address )
      {
        v6 = BgLibraryInitialize(Address, 0xFFFFFFFFLL);
        v7 = byte_1403538D0;
        if ( v6 >= 0 )
          v7 = 1;
        byte_1403538D0 = v7;
      }
      v8 = __rdtsc();
      qword_14032ED30 += (((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8) - v5;
    }
    if ( !Number )
    {
      v35 = __rdtsc();
      v9 = *(_QWORD **)(BugCheckParameter3 + 200);
      if ( v9[11] == v9[66] )
        *(_QWORD *)(BugCheckParameter3 + 408) = v9[69];
      else
        *(_QWORD *)(BugCheckParameter3 + 408) = 0LL;
      v10 = qword_14032E938;
      v11 = *(_QWORD *)(BugCheckParameter3 + 408);
      v12 = *(_DWORD *)(BugCheckParameter3 + 288);
      v13 = *(_QWORD *)(BugCheckParameter3 + 280);
      memset(qword_14032E938, 0, 0x40uLL);
      v10[6] = 0;
      *(_QWORD *)v10 = v13;
      v10[2] = v12;
      *((_QWORD *)v10 + 2) = v11;
      *(_BYTE *)(BugCheckParameter3 + 5) = 1;
      IoNotifyDump(2);
      if ( *(_QWORD *)(BugCheckParameter3 + 408) )
      {
        *(_DWORD *)(BugCheckParameter3 + 184) = 9;
        *(_QWORD *)(BugCheckParameter3 + 160) = v34;
        v34[0] = qword_14032E8B8;
        v34[1] = qword_14032E8B8;
        v34[2] = 0LL;
        off_140321A18();
        v14 = IoInitializeDumpStack(*(_QWORD *)(BugCheckParameter3 + 168));
        v15 = v14;
        if ( v14 < 0 || PopSimulateHiberBugcheck == 4 )
        {
          if ( (PoDebug & 0x80u) != 0 )
            DbgPrint("PopRestoreHiberContext: dump driver initialization failed %08x\n", v14);
          PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0xCuLL, v15, *(_QWORD *)(BugCheckParameter3 + 168), 0LL);
        }
        v16 = __rdtsc();
        qword_14032ED10 = (((unsigned __int64)HIDWORD(v16) << 32) | (unsigned int)v16) - v35;
        v17 = *(_QWORD *)(BugCheckParameter3 + 168);
        *(_DWORD *)(BugCheckParameter3 + 336) = 0;
        *(_QWORD *)(BugCheckParameter3 + 352) = 0LL;
        if ( *(_QWORD *)(v17 + 128) )
          *(_BYTE *)(BugCheckParameter3 + 400) = 1;
        PopHiberReadChecksums(BugCheckParameter3);
        v18 = *(_QWORD *)(BugCheckParameter3 + 200);
        *(_DWORD *)(BugCheckParameter3 + 184) = 10;
        *(_QWORD *)(BugCheckParameter3 + 384) = *(_QWORD *)(v18 + 112) << 12;
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
        v19 = *(void (**)(void))(*(_QWORD *)(BugCheckParameter3 + 168) + 72LL);
        if ( v19 )
          v19();
      }
      IoNotifyDump(3);
      _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 16), 1u);
      while ( *(_DWORD *)(BugCheckParameter3 + 16) != *(_DWORD *)(BugCheckParameter3 + 264) )
        _mm_pause();
      v20 = 0LL;
      v21 = 0LL;
      v22 = 0LL;
      v23 = 0LL;
      v24 = 0;
      if ( *(_DWORD *)(BugCheckParameter3 + 264) )
      {
        v25 = *(_QWORD *)(BugCheckParameter3 + 272);
        v26 = qword_14032ED28;
        v27 = qword_14032ED00;
        v28 = qword_14032ECF0;
        do
        {
          v29 = (unsigned __int64)v24 << 7;
          v28 += *(_QWORD *)(v29 + v25 + 64);
          qword_14032ECF0 = v28;
          v27 += *(_QWORD *)(v29 + *(_QWORD *)(BugCheckParameter3 + 272) + 72);
          qword_14032ED00 = v27;
          v26 += *(_QWORD *)(v29 + *(_QWORD *)(BugCheckParameter3 + 272) + 80);
          qword_14032ED28 = v26;
          v25 = *(_QWORD *)(BugCheckParameter3 + 272);
          if ( *(_QWORD *)(v29 + v25 + 64) + *(_QWORD *)(v29 + v25 + 72) > v4 )
            v4 = *(_QWORD *)(v29 + v25 + 64) + *(_QWORD *)(v29 + v25 + 72);
          v20 += *(_QWORD *)(v29 + v25 + 88);
          v21 += *(_QWORD *)(v29 + v25 + 96);
          ++v24;
          v22 += *(_QWORD *)(v29 + v25 + 104);
          v23 += *(_QWORD *)(v29 + v25 + 112);
        }
        while ( v24 < *(_DWORD *)(BugCheckParameter3 + 264) );
      }
      v30 = v20 / (v22 + 1);
      v31 = v21 / (v23 + 1);
      if ( v31 > v30 )
      {
        v32 = 100
            * (qword_14032ECF8 * *(unsigned int *)(BugCheckParameter3 + 264) / (v23 + v22 + 1) - v30)
            / (v31 - v30);
        if ( v32 > 99 )
        {
          dword_14032E8E4 = 99;
LABEL_42:
          v33 = __rdtsc();
          qword_14032ED18 = (((unsigned __int64)HIDWORD(v33) << 32) | (unsigned int)v33) - v35;
          result = (struct _KPRCB *)(qword_14032ED18 - qword_14032ED10 - v4);
          qword_14032ECE8 = (__int64)result;
          return result;
        }
        dword_14032E8E4 = v32;
        if ( (int)v32 >= 1 )
          goto LABEL_42;
      }
      dword_14032E8E4 = 1;
      goto LABEL_42;
    }
    while ( !*(_BYTE *)(BugCheckParameter3 + 5) )
      _mm_pause();
    result = (struct _KPRCB *)PopDecompressHiberBlocks(BugCheckParameter3, 0LL);
    _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 16), 1u);
  }
  return result;
}
