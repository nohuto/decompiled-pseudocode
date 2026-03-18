/*
 * XREFs of xxxSetClassData @ 0x1C0125654
 * Callers:
 *     xxxSetClassLongPtr @ 0x1C01255F0 (xxxSetClassLongPtr.c)
 *     xxxSetClassLong @ 0x1C01DF11C (xxxSetClassLong.c)
 * Callees:
 *     AllocateUnicodeString @ 0x1C0019B7C (AllocateUnicodeString.c)
 *     DwmGetClassStyle @ 0x1C0093A88 (DwmGetClassStyle.c)
 *     DwmAsyncChildStyleChange @ 0x1C00965BC (DwmAsyncChildStyleChange.c)
 *     ClassLock @ 0x1C009F300 (ClassLock.c)
 *     MapClientNeuterToClientPfn @ 0x1C00A1F54 (MapClientNeuterToClientPfn.c)
 *     xxxClientWOWGetProcModule @ 0x1C00A1FA8 (xxxClientWOWGetProcModule.c)
 *     MapClientToServerPfn @ 0x1C00A2060 (MapClientToServerPfn.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     HMValidateHandleNoRip @ 0x1C00A9D84 (HMValidateHandleNoRip.c)
 *     GetCPD @ 0x1C012881C (GetCPD.c)
 *     MapServerToClientPfn @ 0x1C013019C (MapServerToClientPfn.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01DEDA8 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     ClassUnlock @ 0x1C01DEF3C (ClassUnlock.c)
 */

unsigned __int64 __fastcall xxxSetClassData(struct tagWND *a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int16 v8; // r14
  int v9; // r12d
  int v10; // ebx
  __int64 v11; // r15
  __int64 v12; // r13
  _DWORD *v13; // rax
  char v14; // dl
  __int64 v15; // rdi
  _QWORD *v16; // rax
  unsigned __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int8 v21; // r11
  __int64 v22; // rax
  unsigned int v23; // ecx
  _DWORD *v24; // rdx
  __int64 v25; // rcx
  int ClassStyle; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  void *v31; // rax
  __int64 v32; // rcx
  char v33; // dl
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int16 v39; // ax
  __int64 v40; // rcx
  __int16 v41; // r11
  __int16 v42; // r11
  __int64 CPD; // rax
  __int64 v44; // rax
  __int64 v45; // rbx
  unsigned __int64 v46; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-88h] BYREF
  struct _UNICODE_STRING v48; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v49[24]; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v50[32]; // [rsp+70h] [rbp-48h] BYREF
  struct tagWND *v51; // [rsp+C0h] [rbp+8h]
  struct tagWND *v52; // [rsp+C0h] [rbp+8h]

  v51 = a1;
  v5 = a3;
  v6 = a2;
  v7 = *((_QWORD *)a1 + 19);
  v8 = 0;
  v9 = 0;
  switch ( (_DWORD)a2 )
  {
    case 0xFFFFFFE8:
      if ( (*(_WORD *)(v7 + 34) & 1) != 0 )
      {
        v18 = MapServerToClientPfn(*(_QWORD *)(v7 + 88), a4);
        v52 = (struct tagWND *)v18;
        v42 = v41 & 0xFFFE;
        *(_WORD *)(v7 + 34) = v42;
        if ( a4 )
          *(_WORD *)(v7 + 34) = v42 | 2;
      }
      else
      {
        v18 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 19), 0LL, a4);
        v52 = (struct tagWND *)v18;
        if ( v18 == *(_QWORD *)(v7 + 88) && a4 != ((v21 >> 1) & 1) )
          v9 = 2 - (a4 != 0);
      }
      if ( v9 )
      {
        CPD = GetCPD(v7, v9 | 0x10u, v18);
        v18 = (__int64)v52;
        if ( CPD )
          v18 = CPD;
        v52 = (struct tagWND *)v18;
      }
      if ( (v5 & 0xFFFF0000) == 0xFFFF0000 )
      {
        LOBYTE(v18) = 7;
        v44 = HMValidateHandleNoRip(v5, v18, v19, v20);
        if ( v44 )
          v5 = *(_QWORD *)(v44 + 48);
      }
      *(_QWORD *)(v7 + 88) = v5;
      v22 = MapClientToServerPfn(v5);
      if ( v22 )
      {
        *(_QWORD *)(v7 + 88) = v22;
        *(_WORD *)(v7 + 34) = *(_WORD *)(v7 + 34) & 0xFFFC | 1;
      }
      else if ( a4 )
      {
        *(_WORD *)(v7 + 34) |= 2u;
      }
      else
      {
        *(_WORD *)(v7 + 34) &= ~2u;
      }
      if ( (*(_BYTE *)(v7 + 34) & 8) != 0 )
      {
        v45 = *(int *)(v7 + 96);
        if ( (unsigned int)ClassLock(v7, (__int64)v49) )
        {
          if ( (*(_BYTE *)(v7 + 34) & 1) == 0 )
            v8 = xxxClientWOWGetProcModule(*(_QWORD *)(v7 + 88));
          *(_WORD *)(v45 + v7 + 166) = v8;
          ClassUnlock((struct tagCLS *)v7);
        }
        else
        {
          UserSetLastError(5LL);
          *(_WORD *)(v45 + v7 + 166) = 0;
        }
      }
      return (unsigned __int64)v52;
    case 0xFFFFFFDE:
      goto LABEL_89;
    case 0xFFFFFFE3:
      if ( (*(_BYTE *)(v7 + 34) & 8) != 0 )
        *(_DWORD *)(*(int *)(v7 + 96) + v7 + 160) = a3;
      return 0LL;
    case 0xFFFFFFEC:
      v39 = *(_WORD *)(v7 + 34);
      if ( (v39 & 8) != 0 )
      {
        if ( (v39 & 0x10) != 0 )
        {
          v40 = *(int *)(v7 + 96);
          result = *(unsigned __int16 *)(v40 + v7 + 164);
          *(_WORD *)(v40 + v7 + 164) = a3;
        }
        else
        {
          *(_WORD *)(*(int *)(v7 + 96) + v7 + 164) = a3;
          *(_WORD *)(v7 + 34) |= 0x10u;
          return *(int *)(v7 + 96);
        }
        return result;
      }
LABEL_35:
      v25 = 87LL;
LABEL_85:
      UserSetLastError(v25);
      return 0LL;
    case 0xFFFFFFF2:
    case 0xFFFFFFF4:
LABEL_89:
      if ( (unsigned int)ClassLock(*((_QWORD *)a1 + 19), (__int64)v50) )
      {
        v46 = xxxSetClassCursor(v51, (struct tagCLS *)v7, v6, v5);
        ClassUnlock((struct tagCLS *)v7);
        return v46;
      }
LABEL_84:
      v25 = 5LL;
      goto LABEL_85;
    case 0xFFFFFFF8:
      v34 = *(_QWORD *)(v7 + 136);
      v35 = *(_QWORD *)(a3 + 16);
      v36 = *(_QWORD *)(v35 + 8);
      if ( (v36 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v35 + 8));
        if ( DestinationString.Length )
        {
          if ( !(unsigned int)AllocateUnicodeString(&v48, &DestinationString.Length) )
            return 0LL;
          *(_QWORD *)(v7 + 136) = v48.Buffer;
        }
        else
        {
          *(_QWORD *)(v7 + 136) = 0LL;
        }
      }
      else
      {
        *(_QWORD *)(v7 + 136) = v36;
      }
      *(_QWORD *)(v5 + 16) = 0LL;
      if ( (v34 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        Win32FreePool(v34, a2, a3);
      v37 = *(_QWORD *)(v7 + 40);
      *(_QWORD *)(v7 + 40) = *(_QWORD *)v5;
      *(_QWORD *)v5 = v37;
      v38 = *(_QWORD *)(v7 + 48);
      *(_QWORD *)(v7 + 48) = *(_QWORD *)(v5 + 8);
      *(_QWORD *)(v5 + 8) = v38;
      if ( a4 )
        return *(_QWORD *)v5;
      return v38;
    default:
      if ( (*(_WORD *)(v7 + 34) & 0x200) != 0 && (_DWORD)a2 == -18 )
      {
        v23 = 0;
        v24 = &gDefaultServerClasses;
        while ( *(_WORD *)(v7 + 8) != *(_WORD *)(gpsi + 2LL * ((*v24 >> 3) & 0x1F) + 852) )
        {
          ++v23;
          v24 += 12;
          if ( v23 >= 8 )
            goto LABEL_34;
        }
        if ( a3 < *((unsigned int *)&gDefaultServerClasses + 12 * v23 + 6) )
          goto LABEL_84;
LABEL_34:
        a1 = v51;
      }
      if ( v6 != -32 )
      {
        v10 = v6 + 34;
        if ( v10 >= 0 )
        {
          v11 = v10;
          if ( byte_1C02EA650[v10] )
          {
            _mm_lfence();
            v12 = *(_QWORD *)(v7 + 64);
            v13 = (_DWORD *)(v12 + byte_1C02EA650[v10]);
            v14 = byte_1C02EA678[v10];
            if ( v14 == 4 )
            {
              v15 = (unsigned int)*v13;
              *v13 = a3;
              if ( (_DWORD)v15 != (_DWORD)a3 && v10 == 8 && (unsigned int)IsWindowDesktopComposed(a1) )
              {
                ClassStyle = DwmGetClassStyle((__int64)v51);
                v31 = (void *)ReferenceDwmApiPort(v28, v27, v29, v30);
                DwmAsyncChildStyleChange(v31, *(_QWORD *)v51, -26, ClassStyle);
              }
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
            v16 = *(_QWORD **)(v12 + 72);
            if ( v16 )
            {
              v32 = byte_1C02EA650[v11];
              v33 = byte_1C02EA678[v11];
              do
              {
                if ( v33 == 4 )
                {
                  v15 = *(unsigned int *)((char *)v16 + v32);
                  *(_DWORD *)((char *)v16 + v32) = v5;
                }
                else if ( v33 == 8 )
                {
                  v15 = *(_QWORD *)((char *)v16 + v32);
                  *(_QWORD *)((char *)v16 + v32) = v5;
                }
                else
                {
                  v15 = *(unsigned __int16 *)((char *)v16 + v32);
                  *(_WORD *)((char *)v16 + v32) = v5;
                }
                v16 = (_QWORD *)*v16;
              }
              while ( v16 );
            }
            return v15;
          }
        }
        v25 = 1413LL;
        goto LABEL_85;
      }
      goto LABEL_35;
  }
}
