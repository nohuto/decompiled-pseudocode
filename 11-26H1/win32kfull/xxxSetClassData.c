/*
 * XREFs of xxxSetClassData @ 0x140151060
 * Callers:
 *     xxxSetClassLongPtr @ 0x140150DF0 (xxxSetClassLongPtr.c)
 *     xxxSetClassLong @ 0x140152E14 (xxxSetClassLong.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     HMValidateHandleNoRip @ 0x140095FE4 (HMValidateHandleNoRip.c)
 *     ?DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z @ 0x1400A703C (-DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x14014F7F0 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x14014FEF0 (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 *     GetCPD @ 0x140150018 (GetCPD.c)
 *     MapClientToServerPfn @ 0x1401505B0 (MapClientToServerPfn.c)
 *     MapClientNeuterToClientPfn @ 0x1401506CC (MapClientNeuterToClientPfn.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x140150B00 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     MapServerToClientPfn @ 0x140150F40 (MapServerToClientPfn.c)
 *     ClassLock @ 0x140150FE0 (ClassLock.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z @ 0x1401516B4 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x140151BB0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     AllocateUnicodeString @ 0x14021C838 (AllocateUnicodeString.c)
 */

_QWORD *__fastcall xxxSetClassData(struct tagWND *a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v6; // rsi
  _QWORD *v8; // rdi
  unsigned int v9; // r14d
  struct tagCLS *v10; // rbx
  struct tagTHREADINFO *v11; // rax
  _DWORD *v13; // rax
  char v14; // cl
  unsigned __int64 v15; // r14
  __int64 i; // rdx
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rax
  int v20; // ecx
  _DWORD *v21; // rax
  char v22; // cl
  unsigned __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  _QWORD *v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 UserSessionState; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  int v38; // ecx
  __int64 CPD; // rax
  __int64 v40; // rax
  __int64 v41[2]; // [rsp+30h] [rbp-78h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-68h] BYREF
  __int128 v43; // [rsp+50h] [rbp-58h] BYREF
  __int128 v44; // [rsp+60h] [rbp-48h] BYREF
  __int64 v45; // [rsp+70h] [rbp-38h]

  v6 = a2;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v41, *((_QWORD *)a1 + 17));
  v8 = 0LL;
  v9 = 0;
  v44 = 0LL;
  v45 = 0LL;
  v43 = 0LL;
  DestinationString = 0LL;
  switch ( (_DWORD)v6 )
  {
    case 0xFFFFFFF4:
      goto LABEL_2;
    case 0xFFFFFFE8:
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v41[0] + 8LL) + 6LL) & 1) != 0 )
      {
        v18 = MapServerToClientPfn(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v41[0] + 8LL) + 32LL), a4);
        v17 = *(_QWORD *)v41[0];
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v41[0] + 8LL) + 6LL) &= ~1u;
        if ( a4 )
        {
          v17 = *(_QWORD *)v41[0];
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)v41[0] + 8LL) + 6LL) |= 2u;
        }
      }
      else
      {
        v18 = MapClientNeuterToClientPfn(*(_QWORD *)v41[0], 0LL, a4);
        if ( v18 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v41[0] + 8LL) + 32LL)
          && a4 != ((*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v41[0] + 8LL) + 6LL) >> 1) & 1) )
        {
          v9 = 2 - (a4 != 0);
        }
      }
      if ( v9 )
      {
        CPD = GetCPD(*(_QWORD *)v41[0], v9 | 0x10, v18);
        if ( CPD )
          v18 = CPD;
      }
      if ( (a3 & 0xFFFF0000) == 0xFFFF0000 )
      {
        v40 = HMValidateHandleNoRip(a3, 7);
        if ( v40 )
          a3 = *(_QWORD *)(*(_QWORD *)(v40 + 40) + 16LL);
      }
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v41[0] + 8LL) + 32LL) = a3;
      v19 = MapClientToServerPfn(a3, v17);
      if ( v19 )
      {
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v41[0] + 8LL) + 32LL) = v19;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v41[0] + 8LL) + 6LL) |= 1u;
      }
      else if ( a4 )
      {
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v41[0] + 8LL) + 6LL) |= 2u;
        goto LABEL_28;
      }
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)v41[0] + 8LL) + 6LL) &= ~2u;
LABEL_28:
      v8 = (_QWORD *)v18;
      goto LABEL_4;
    case 0xFFFFFFDE:
LABEL_2:
      if ( (unsigned int)ClassLock(*(_QWORD *)v41[0], &v44) )
      {
        v8 = xxxSetClassCursor(a1, *(struct tagCLS **)v41[0], v6, a3);
        v10 = *(struct tagCLS **)v41[0];
        v11 = PtiCurrent(v41[0]);
        *((_QWORD *)v11 + 47) = v44;
        ClassUnlockWorker(v10);
        goto LABEL_4;
      }
LABEL_77:
      v38 = 5;
      goto LABEL_78;
    case 0xFFFFFFE3:
      goto LABEL_79;
    case 0xFFFFFFEC:
      v38 = 87;
LABEL_78:
      UserSetLastError(v38);
      goto LABEL_79;
    case 0xFFFFFFEE:
      v33 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v41[0] + 8LL) + 80LL);
      v34 = *(_QWORD *)v41[0];
      v18 = (unsigned int)(v33 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v41[0] + 8LL) + 84LL));
      while ( v9 < 5 )
      {
        UserSessionState = W32GetUserSessionState(v34, v33);
        v33 = ((unsigned int)gDefaultServerClasses[12 * v9] >> 3) & 0x1F;
        v34 = **(unsigned __int16 **)(*(_QWORD *)v41[0] + 8LL);
        if ( (_WORD)v34 == *(_WORD *)(*(_QWORD *)(UserSessionState + 19904) + 2 * v33 + 868) )
        {
          v36 = (unsigned int)dword_14035BED8[12 * v9];
          v37 = *(_QWORD *)(*(_QWORD *)v41[0] + 8LL);
          if ( a3 >= v36 )
          {
            *(_DWORD *)(v37 + 84) = v36;
            LODWORD(a3) = a3 - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v41[0] + 8LL) + 84LL);
          }
          else
          {
            if ( _bittest16((const signed __int16 *)(v37 + 6), 9u) )
              goto LABEL_77;
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v41[0] + 8LL) + 84LL) = 0;
          }
          break;
        }
        ++v9;
      }
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v41[0] + 8LL) + 80LL) = a3;
      goto LABEL_28;
    case 0xFFFFFFF2:
      goto LABEL_2;
  }
  if ( (_DWORD)v6 != -8 )
  {
    if ( (_DWORD)v6 == -32 )
    {
      v20 = 87;
    }
    else
    {
      if ( (int)v6 + 34 >= 0 )
      {
        _mm_lfence();
        if ( byte_14036895A[v6] )
        {
          SmartObjStackRefBase<tagCLS>::operator=(v41, *(_QWORD *)(*(_QWORD *)v41[0] + 56LL));
          v13 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v41[0] + 8LL) + byte_14036895A[v6]);
          v14 = byte_140361BD2[v6];
          if ( v14 == 4 )
          {
            v15 = (unsigned int)*v13;
            *v13 = a3;
            if ( (_DWORD)v6 == -26 && (_DWORD)v15 != (_DWORD)a3 )
              DwmUpdateCloseButton(a1, 1);
          }
          else if ( v14 == 8 )
          {
            v15 = *(_QWORD *)v13;
            *(_QWORD *)v13 = a3;
          }
          else
          {
            v15 = *(unsigned __int16 *)v13;
            *(_WORD *)v13 = a3;
          }
          for ( i = *(_QWORD *)(*(_QWORD *)v41[0] + 64LL); ; i = **(_QWORD **)v41[0] )
          {
            SmartObjStackRefBase<tagCLS>::operator=(v41, i);
            if ( !*(_QWORD *)v41[0] )
              break;
            v21 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v41[0] + 8LL) + byte_14036895A[v6]);
            v22 = byte_140361BD2[v6];
            if ( v22 == 4 )
            {
              v15 = (unsigned int)*v21;
              *v21 = a3;
            }
            else if ( v22 == 8 )
            {
              v15 = *(_QWORD *)v21;
              *(_QWORD *)v21 = a3;
            }
            else
            {
              v15 = *(unsigned __int16 *)v21;
              *(_WORD *)v21 = a3;
            }
          }
          v8 = (_QWORD *)v15;
          goto LABEL_4;
        }
      }
      v20 = 1413;
    }
    UserSetLastError(v20);
LABEL_4:
    SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v41);
    return v8;
  }
  v23 = *(_QWORD *)(*(_QWORD *)v41[0] + 96LL);
  v24 = *(_QWORD *)(a3 + 16);
  v25 = *(_QWORD *)(v24 + 8);
  if ( (v25 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v30 = *(_QWORD *)v41[0];
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v41[0] + 8LL) + 40LL) = v25;
    *(_QWORD *)(v30 + 96) = v25;
    goto LABEL_53;
  }
  RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v24 + 8));
  if ( !DestinationString.Length )
  {
    v26 = *(_QWORD *)v41[0];
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v41[0] + 8LL) + 40LL) = 0LL;
    *(_QWORD *)(v26 + 96) = 0LL;
LABEL_53:
    *(_QWORD *)(a3 + 16) = 0LL;
    if ( (v23 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      Win32FreePool((void *)v23);
    v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v41[0] + 8LL) + 16LL);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v41[0] + 8LL) + 16LL) = *(_QWORD *)a3;
    *(_QWORD *)a3 = v31;
    v32 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)v41[0] + 8LL) + 24LL);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v41[0] + 8LL) + 24LL) = *(_QWORD *)(a3 + 8);
    *(_QWORD *)(a3 + 8) = v32;
    if ( a4 )
      v8 = *(_QWORD **)a3;
    else
      v8 = v32;
    goto LABEL_4;
  }
  if ( (unsigned int)AllocateUnicodeString(&v43, &DestinationString) )
  {
    v27 = *(_QWORD *)v41[0];
    v28 = *((_QWORD *)&v43 + 1);
    v29 = *((_QWORD *)&v43 + 1);
    if ( (*((_QWORD *)&v43 + 1) & 0xFFFFFFFFFFFF0000uLL) != 0 )
      v29 = -1LL;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v41[0] + 8LL) + 40LL) = v29;
    *(_QWORD *)(v27 + 96) = v28;
    goto LABEL_53;
  }
  *(_QWORD *)(a3 + 16) = 0LL;
LABEL_79:
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v41);
  return 0LL;
}
