/*
 * XREFs of xxxSetClassData @ 0x1C0127AFC
 * Callers:
 *     xxxSetClassLongPtr @ 0x1C0127A98 (xxxSetClassLongPtr.c)
 *     xxxSetClassLong @ 0x1C01E827C (xxxSetClassLong.c)
 * Callees:
 *     MapClientToServerPfn @ 0x1C0059BB8 (MapClientToServerPfn.c)
 *     DwmAsyncChildStyleChange @ 0x1C005B79C (DwmAsyncChildStyleChange.c)
 *     DwmGetClassStyle @ 0x1C005B8D0 (DwmGetClassStyle.c)
 *     ClassLock @ 0x1C005BE7C (ClassLock.c)
 *     MapClientNeuterToClientPfn @ 0x1C005C9FC (MapClientNeuterToClientPfn.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     HMValidateHandleNoRip @ 0x1C007E714 (HMValidateHandleNoRip.c)
 *     xxxClientWOWGetProcModule @ 0x1C00E9350 (xxxClientWOWGetProcModule.c)
 *     AllocateUnicodeString @ 0x1C00F47D4 (AllocateUnicodeString.c)
 *     GetCPD @ 0x1C00FA93C (GetCPD.c)
 *     MapServerToClientPfn @ 0x1C0128AEC (MapServerToClientPfn.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C0154734 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     ClassUnlock @ 0x1C0154834 (ClassUnlock.c)
 */

unsigned __int64 __fastcall xxxSetClassData(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v5; // rsi
  __int64 v7; // rdi
  __int16 v8; // r14
  int v9; // r12d
  int v10; // ebx
  __int64 v11; // r15
  __int64 v12; // r13
  _DWORD *v13; // rax
  unsigned __int8 v14; // dl
  __int64 v15; // rdi
  _QWORD *v16; // rax
  unsigned __int64 result; // rax
  __int64 v18; // rdx
  unsigned __int8 v19; // r11
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  unsigned int v22; // ecx
  _DWORD *v23; // rdx
  int v24; // ecx
  int ClassStyle; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  void *v30; // rax
  __int64 v31; // rcx
  unsigned __int8 v32; // dl
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int16 v38; // ax
  __int64 v39; // rcx
  __int16 v40; // r11
  __int16 v41; // r11
  __int64 CPD; // rax
  struct tagWND *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-88h] BYREF
  struct _UNICODE_STRING v48; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v49[24]; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v50[32]; // [rsp+70h] [rbp-48h] BYREF
  struct tagWND *v51; // [rsp+C0h] [rbp+8h]
  struct tagWND *v52; // [rsp+C0h] [rbp+8h]

  v51 = a1;
  v5 = a3;
  v7 = *((_QWORD *)a1 + 19);
  v8 = 0;
  v9 = 0;
  switch ( a2 )
  {
    case 0xFFFFFFE8:
      if ( (*(_WORD *)(v7 + 34) & 1) != 0 )
      {
        v18 = MapServerToClientPfn(*(_QWORD *)(v7 + 88), a4);
        v52 = (struct tagWND *)v18;
        v41 = v40 & 0xFFFE;
        *(_WORD *)(v7 + 34) = v41;
        if ( a4 )
          *(_WORD *)(v7 + 34) = v41 | 2;
      }
      else
      {
        v18 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 19), 0LL, a4);
        v52 = (struct tagWND *)v18;
        if ( v18 == *(_QWORD *)(v7 + 88) && a4 != ((v19 >> 1) & 1) )
          v9 = 2 - (a4 != 0);
      }
      if ( v9 )
      {
        CPD = GetCPD(v7, v9 | 0x10u, v18);
        v43 = v52;
        if ( CPD )
          v43 = (struct tagWND *)CPD;
        v52 = v43;
      }
      if ( (v5 & 0xFFFF0000) == 0xFFFF0000 )
      {
        v44 = HMValidateHandleNoRip(v5, 7);
        if ( v44 )
          v5 = *(_QWORD *)(v44 + 48);
      }
      *(_QWORD *)(v7 + 88) = v5;
      v20 = MapClientToServerPfn(v5);
      if ( v20 )
      {
        *(_QWORD *)(v7 + 88) = v20;
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
            v8 = xxxClientWOWGetProcModule(*(_QWORD *)(v7 + 88), v46);
          *(_WORD *)(v45 + v7 + 166) = v8;
          ClassUnlock((struct tagCLS *)v7);
        }
        else
        {
          UserSetLastError(5);
          *(_WORD *)(v45 + v7 + 166) = 0;
        }
      }
      return (unsigned __int64)v52;
    case 0xFFFFFFF2:
    case 0xFFFFFFDE:
      goto LABEL_89;
    case 0xFFFFFFE3:
      if ( (*(_BYTE *)(v7 + 34) & 8) != 0 )
        *(_DWORD *)(*(int *)(v7 + 96) + v7 + 160) = a3;
      return 0LL;
    case 0xFFFFFFEC:
      v38 = *(_WORD *)(v7 + 34);
      if ( (v38 & 8) != 0 )
      {
        if ( (v38 & 0x10) != 0 )
        {
          v39 = *(int *)(v7 + 96);
          result = *(unsigned __int16 *)(v39 + v7 + 164);
          *(_WORD *)(v39 + v7 + 164) = a3;
        }
        else
        {
          *(_WORD *)(*(int *)(v7 + 96) + v7 + 164) = a3;
          *(_WORD *)(v7 + 34) |= 0x10u;
          return *(int *)(v7 + 96);
        }
        return result;
      }
LABEL_37:
      v24 = 87;
LABEL_85:
      UserSetLastError(v24);
      return 0LL;
    case 0xFFFFFFF4:
LABEL_89:
      if ( (unsigned int)ClassLock(*((_QWORD *)a1 + 19), (__int64)v50) )
      {
        v21 = xxxSetClassCursor(v51, (struct tagCLS *)v7, a2, v5);
        ClassUnlock((struct tagCLS *)v7);
        return v21;
      }
LABEL_84:
      v24 = 5;
      goto LABEL_85;
    case 0xFFFFFFF8:
      v33 = *(_QWORD *)(v7 + 136);
      v34 = *(_QWORD *)(a3 + 16);
      v35 = *(_QWORD *)(v34 + 8);
      if ( (v35 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v34 + 8));
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
        *(_QWORD *)(v7 + 136) = v35;
      }
      *(_QWORD *)(v5 + 16) = 0LL;
      if ( (v33 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        Win32FreePool(v33);
      v36 = *(_QWORD *)(v7 + 40);
      *(_QWORD *)(v7 + 40) = *(_QWORD *)v5;
      *(_QWORD *)v5 = v36;
      v37 = *(_QWORD *)(v7 + 48);
      *(_QWORD *)(v7 + 48) = *(_QWORD *)(v5 + 8);
      *(_QWORD *)(v5 + 8) = v37;
      if ( a4 )
        return *(_QWORD *)v5;
      return v37;
    default:
      if ( (*(_WORD *)(v7 + 34) & 0x200) != 0 && a2 == -18 )
      {
        v22 = 0;
        v23 = &gDefaultServerClasses;
        while ( *(_WORD *)(v7 + 8) != *(_WORD *)(gpsi + 2LL * ((*v23 >> 3) & 0x1F) + 852) )
        {
          ++v22;
          v23 += 12;
          if ( v22 >= 8 )
            goto LABEL_36;
        }
        if ( a3 < *((unsigned int *)&gDefaultServerClasses + 12 * v22 + 6) )
          goto LABEL_84;
LABEL_36:
        a1 = v51;
      }
      if ( a2 != -32 )
      {
        v10 = a2 + 34;
        if ( v10 >= 0 )
        {
          v11 = v10;
          if ( byte_1C02E8FD0[v10] )
          {
            _mm_lfence();
            v12 = *(_QWORD *)(v7 + 64);
            v13 = (_DWORD *)(v12 + byte_1C02E8FD0[v10]);
            v14 = byte_1C02E8FD0[v10 + 40];
            if ( v14 == 4 )
            {
              v15 = (unsigned int)*v13;
              *v13 = a3;
              if ( (_DWORD)v15 != (_DWORD)a3 && v10 == 8 && (unsigned int)IsWindowDesktopComposed(a1) )
              {
                ClassStyle = DwmGetClassStyle((__int64)v51);
                v30 = (void *)ReferenceDwmApiPort(v27, v26, v28, v29);
                DwmAsyncChildStyleChange(v30, *(_QWORD *)v51, -26, ClassStyle);
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
              v31 = byte_1C02E8FD0[v11];
              v32 = byte_1C02E8FD0[v11 + 40];
              do
              {
                if ( v32 == 4 )
                {
                  v15 = *(unsigned int *)((char *)v16 + v31);
                  *(_DWORD *)((char *)v16 + v31) = v5;
                }
                else if ( v32 == 8 )
                {
                  v15 = *(_QWORD *)((char *)v16 + v31);
                  *(_QWORD *)((char *)v16 + v31) = v5;
                }
                else
                {
                  v15 = *(unsigned __int16 *)((char *)v16 + v31);
                  *(_WORD *)((char *)v16 + v31) = v5;
                }
                v16 = (_QWORD *)*v16;
              }
              while ( v16 );
            }
            return v15;
          }
        }
        v24 = 1413;
        goto LABEL_85;
      }
      goto LABEL_37;
  }
}
