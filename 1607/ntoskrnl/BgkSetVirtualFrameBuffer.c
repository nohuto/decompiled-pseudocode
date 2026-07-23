/*
 * XREFs of BgkSetVirtualFrameBuffer @ 0x14014BFA4
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     BgGetDisplayContext @ 0x140725000 (BgGetDisplayContext.c)
 *     BgSetFrameBufferAccessCounter @ 0x140725008 (BgSetFrameBufferAccessCounter.c)
 *     BgReleaseSpinLock @ 0x140728BAC (BgReleaseSpinLock.c)
 *     BgAcquireSpinLock @ 0x140728BB4 (BgAcquireSpinLock.c)
 *     BgConvertResources @ 0x14072A230 (BgConvertResources.c)
 *     BgGetIsColorOverridden @ 0x14072A2AC (BgGetIsColorOverridden.c)
 */

__int64 __fastcall BgkSetVirtualFrameBuffer(__int64 a1, __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD))
{
  __int64 DisplayContext; // r14
  char IsColorOverridden; // al
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // ebp
  unsigned int v9; // r15d
  int v10; // eax
  size_t v11; // rbx
  _DWORD *v12; // r8
  size_t v13; // rbx
  __int64 v14; // r9
  unsigned int v15; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    qword_140328E18 = a2;
  }
  else if ( !qword_140328E18 )
  {
    return 3221225712LL;
  }
  DisplayContext = BgGetDisplayContext();
  IsColorOverridden = BgGetIsColorOverridden(&v15);
  v6 = *(unsigned int *)(DisplayContext + 16);
  LOBYTE(v7) = IsColorOverridden;
  v8 = 24;
  if ( (_DWORD)v6 == 4 )
  {
    v9 = 24;
  }
  else
  {
    v9 = 1;
    if ( (_DWORD)v6 == 5 )
      v9 = 32;
  }
  v10 = *(_DWORD *)(a1 + 36);
  if ( v10 == 4 )
  {
    LOBYTE(v7) = 0;
  }
  else
  {
    v8 = 1;
    if ( v10 == 5 )
      v8 = 32;
  }
  v11 = *(_DWORD *)(DisplayContext + 4) * *(_DWORD *)(DisplayContext + 12) * (v9 >> 3);
  if ( v11 != *(_QWORD *)(a1 + 8) )
    return 3221225473LL;
  if ( !*(_BYTE *)(a1 + 40) )
  {
    BgAcquireSpinLock(v6, v7);
    memmove(*(void **)a1, *(const void **)(DisplayContext + 32), v11);
    goto LABEL_26;
  }
  if ( (_BYTE)v7 )
  {
    v12 = *(_DWORD **)a1;
    v13 = v11 >> 2;
    if ( v13 )
    {
      v14 = v15;
      if ( ((unsigned __int8)v12 & 4) != 0 )
      {
        *v12 = v15;
        if ( !--v13 )
          goto LABEL_24;
        ++v12;
      }
      memset64(v12, v14 | (v14 << 32), v13 >> 1);
      v6 = 0LL;
      if ( (v13 & 1) != 0 )
        v12[v13 - 1] = v14;
    }
  }
  else
  {
    memset(*(void **)a1, 0, *(_DWORD *)(DisplayContext + 4) * *(_DWORD *)(DisplayContext + 12) * (v9 >> 3));
  }
LABEL_24:
  BgAcquireSpinLock(v6, v7);
LABEL_26:
  if ( v9 != v8 )
    BgConvertResources(v8);
  *(_QWORD *)(DisplayContext + 32) = *(_QWORD *)a1;
  *(_OWORD *)(DisplayContext + 4) = *(_OWORD *)(a1 + 24);
  BgSetFrameBufferAccessCounter(*(_QWORD *)(a1 + 16));
  byte_140328D11 = 1;
  BgReleaseSpinLock();
  return 0LL;
}
