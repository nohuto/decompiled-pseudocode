/*
 * XREFs of PiDmObjectUpdateCachedObjectProperty @ 0x1404E2C6C
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x1404E18C0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x1404E34C4 (PiDmObjectUpdateCachedCmProperty.c)
 * Callees:
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     PiDmCacheDataEncode @ 0x1404C3F78 (PiDmCacheDataEncode.c)
 *     PiDmCacheDataFree @ 0x1404CBCD0 (PiDmCacheDataFree.c)
 *     PiDmObjectReleaseLock @ 0x1404CE250 (PiDmObjectReleaseLock.c)
 *     PnpGetObjectProperty @ 0x1404DEBF4 (PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x1404E1F50 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1404E1F90 (PiDmGetObject.c)
 *     PiDmGetCacheKeys @ 0x1404E2474 (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x1404E24C0 (PiDmGetCachedKeyIndex.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x1404E90B4 (PiDmObjectAcquireExclusiveLock.c)
 *     PiDmFreeMem @ 0x14062F980 (PiDmFreeMem.c)
 */

void __fastcall PiDmObjectUpdateCachedObjectProperty(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int128 *Buf2,
        SIZE_T NumberOfBytes)
{
  bool v9; // r14
  DEVPROPKEY **v11; // r15
  unsigned int CachedKeyIndex; // eax
  __int64 v13; // rsi
  unsigned int v14; // edx
  signed __int64 *v15; // rdi
  __int64 v16; // rcx
  __int128 *v17; // rsi
  unsigned int v18; // edx
  int v19; // r9d
  unsigned int v20; // eax
  int v21; // r15d
  int ObjectProperty; // eax
  void *v23; // rbx
  int v24; // r14d
  unsigned int v25; // eax
  void *Buf1; // [rsp+60h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-18h] BYREF
  DEVPROPKEY **v28; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v29; // [rsp+C0h] [rbp+40h] BYREF
  int v30; // [rsp+C4h] [rbp+44h]
  __int64 v31; // [rsp+C8h] [rbp+48h] BYREF

  if ( !a4 )
  {
    v30 = HIDWORD(a3);
    BugCheckParameter2 = 0LL;
    Buf1 = 0LL;
    v29 = 0;
    v9 = 0;
    PiDmGetCacheKeys(a1, &v28, &v31);
    if ( (_DWORD)v31 )
    {
      v11 = v28;
      CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v28, v31, a5);
      v13 = CachedKeyIndex;
      if ( CachedKeyIndex < v14 && (int)PiDmGetObject(a1, a2, &BugCheckParameter2) >= 0 )
      {
        v15 = (signed __int64 *)BugCheckParameter2;
        PiDmObjectAcquireExclusiveLock(BugCheckParameter2);
        v16 = 3 * v13;
        v17 = Buf2;
        v18 = v15[v16 + 13];
        v28 = (DEVPROPKEY **)&v15[v16 + 13];
        if ( v18 > 1 )
        {
          v21 = a6;
        }
        else
        {
          v19 = (int)v11[v16 + 1];
          v20 = HIDWORD(v11[v16 + 1]);
          v21 = a6;
          v9 = v18 == 0;
          PiDmCacheDataEncode(a6, Buf2, NumberOfBytes, v19, v20, (__int64)&v15[v16 + 13]);
        }
        PiDmObjectReleaseLock(v15);
        if ( !v9 )
          goto LABEL_27;
        ObjectProperty = PnpGetObjectProperty(
                           0x5A706E50u,
                           (unsigned int)NumberOfBytes,
                           a2,
                           a1,
                           0LL,
                           0LL,
                           a5,
                           (__int64)&v31,
                           &Buf1,
                           &v29,
                           0x10000);
        v23 = Buf1;
        v24 = ObjectProperty;
        if ( ObjectProperty == -1073741275 )
        {
          v24 = 0;
          LODWORD(v31) = 0;
          if ( Buf1 )
          {
            PiDmFreeMem(Buf1);
            v23 = 0LL;
          }
          v25 = 0;
        }
        else
        {
          v25 = v29;
        }
        if ( v24 < 0 || (_DWORD)v31 != v21 || v25 != (_DWORD)NumberOfBytes )
          goto LABEL_24;
        if ( v23 )
        {
          if ( !v17 )
            goto LABEL_24;
        }
        else if ( v17 )
        {
          goto LABEL_24;
        }
        if ( !v25 )
          goto LABEL_25;
        if ( !v23 )
        {
LABEL_27:
          PiDmObjectRelease((unsigned int *)v15);
          return;
        }
        if ( !memcmp(v23, v17, v25) )
        {
LABEL_25:
          if ( v23 )
            PiDmFreeMem(v23);
          goto LABEL_27;
        }
LABEL_24:
        PiDmObjectAcquireExclusiveLock(v15);
        PiDmCacheDataFree((__int64)v28);
        PiDmObjectReleaseLock(v15);
        goto LABEL_25;
      }
    }
  }
}
