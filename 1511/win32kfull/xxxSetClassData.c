/*
 * XREFs of xxxSetClassData @ 0x1C0103C44
 * Callers:
 *     xxxSetClassLongPtr @ 0x1C0103BE0 (xxxSetClassLongPtr.c)
 *     xxxSetClassLong @ 0x1C01E88A4 (xxxSetClassLong.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     DwmAsyncChildStyleChange @ 0x1C0080178 (DwmAsyncChildStyleChange.c)
 *     HMValidateHandleNoRip @ 0x1C00809E4 (HMValidateHandleNoRip.c)
 *     DwmGetClassStyle @ 0x1C00D2C50 (DwmGetClassStyle.c)
 *     xxxClientWOWGetProcModule @ 0x1C00EE868 (xxxClientWOWGetProcModule.c)
 *     ClassLock @ 0x1C00F1844 (ClassLock.c)
 *     GetCPD @ 0x1C0104AFC (GetCPD.c)
 *     MapServerToClientPfn @ 0x1C010F710 (MapServerToClientPfn.c)
 *     MapClientToServerPfn @ 0x1C011D63C (MapClientToServerPfn.c)
 *     MapClientNeuterToClientPfn @ 0x1C011E4C4 (MapClientNeuterToClientPfn.c)
 *     AllocateUnicodeString @ 0x1C011FED4 (AllocateUnicodeString.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E8530 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     ClassUnlock @ 0x1C01E86C4 (ClassUnlock.c)
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
  char v14; // dl
  __int64 v15; // rdi
  _QWORD *v16; // rax
  unsigned __int64 result; // rax
  __int64 v18; // rdx
  unsigned __int8 v19; // r11
  __int64 v20; // rax
  unsigned int v21; // ecx
  _DWORD *v22; // rdx
  int v23; // ecx
  int ClassStyle; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  void *v29; // rax
  __int64 v30; // rcx
  char v31; // dl
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int16 v37; // ax
  __int64 v38; // rcx
  __int16 v39; // r11
  __int16 v40; // r11
  __int64 CPD; // rax
  struct tagWND *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rdx
  unsigned __int64 v46; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v48[8]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v49; // [rsp+48h] [rbp-70h]
  _QWORD v50[3]; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v51[4]; // [rsp+70h] [rbp-48h] BYREF
  struct tagWND *v52; // [rsp+C0h] [rbp+8h]
  struct tagWND *v53; // [rsp+C0h] [rbp+8h]

  v52 = a1;
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
        v53 = (struct tagWND *)v18;
        v40 = v39 & 0xFFFE;
        *(_WORD *)(v7 + 34) = v40;
        if ( a4 )
          *(_WORD *)(v7 + 34) = v40 | 2;
      }
      else
      {
        v18 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 19), 0LL, a4);
        v53 = (struct tagWND *)v18;
        if ( v18 == *(_QWORD *)(v7 + 88) && a4 != ((v19 >> 1) & 1) )
          v9 = 2 - (a4 != 0);
      }
      if ( v9 )
      {
        CPD = GetCPD(v7, v9 | 0x10u, v18);
        v42 = v53;
        if ( CPD )
          v42 = (struct tagWND *)CPD;
        v53 = v42;
      }
      if ( (v5 & 0xFFFF0000) == 0xFFFF0000 )
      {
        v43 = HMValidateHandleNoRip(v5, 7);
        if ( v43 )
          v5 = *(_QWORD *)(v43 + 48);
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
        v44 = *(int *)(v7 + 96);
        if ( (unsigned int)ClassLock(v7, v50) )
        {
          if ( (*(_BYTE *)(v7 + 34) & 1) == 0 )
            v8 = xxxClientWOWGetProcModule(*(_QWORD *)(v7 + 88), v45);
          *(_WORD *)(v44 + v7 + 166) = v8;
          ClassUnlock((struct tagCLS *)v7);
        }
        else
        {
          UserSetLastError(5);
          *(_WORD *)(v44 + v7 + 166) = 0;
        }
      }
      return (unsigned __int64)v53;
    case 0xFFFFFFDE:
      goto LABEL_89;
    case 0xFFFFFFE3:
      if ( (*(_BYTE *)(v7 + 34) & 8) != 0 )
        *(_DWORD *)(*(int *)(v7 + 96) + v7 + 160) = a3;
      return 0LL;
    case 0xFFFFFFEC:
      v37 = *(_WORD *)(v7 + 34);
      if ( (v37 & 8) != 0 )
      {
        if ( (v37 & 0x10) != 0 )
        {
          v38 = *(int *)(v7 + 96);
          result = *(unsigned __int16 *)(v38 + v7 + 164);
          *(_WORD *)(v38 + v7 + 164) = a3;
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
      v23 = 87;
LABEL_85:
      UserSetLastError(v23);
      return 0LL;
    case 0xFFFFFFF2:
    case 0xFFFFFFF4:
LABEL_89:
      if ( (unsigned int)ClassLock(*((_QWORD *)a1 + 19), v51) )
      {
        v46 = xxxSetClassCursor(v52, (struct tagCLS *)v7, a2, v5);
        ClassUnlock((struct tagCLS *)v7);
        return v46;
      }
LABEL_84:
      v23 = 5;
      goto LABEL_85;
    case 0xFFFFFFF8:
      v32 = *(_QWORD *)(v7 + 136);
      v33 = *(_QWORD *)(a3 + 16);
      v34 = *(_QWORD *)(v33 + 8);
      if ( (v34 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v33 + 8));
        if ( DestinationString.Length )
        {
          if ( !(unsigned int)AllocateUnicodeString(v48, &DestinationString) )
            return 0LL;
          *(_QWORD *)(v7 + 136) = v49;
        }
        else
        {
          *(_QWORD *)(v7 + 136) = 0LL;
        }
      }
      else
      {
        *(_QWORD *)(v7 + 136) = v34;
      }
      *(_QWORD *)(v5 + 16) = 0LL;
      if ( (v32 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        Win32FreePool(v32);
      v35 = *(_QWORD *)(v7 + 40);
      *(_QWORD *)(v7 + 40) = *(_QWORD *)v5;
      *(_QWORD *)v5 = v35;
      v36 = *(_QWORD *)(v7 + 48);
      *(_QWORD *)(v7 + 48) = *(_QWORD *)(v5 + 8);
      *(_QWORD *)(v5 + 8) = v36;
      if ( a4 )
        return *(_QWORD *)v5;
      return v36;
    default:
      if ( (*(_WORD *)(v7 + 34) & 0x200) != 0 && a2 == -18 )
      {
        v21 = 0;
        v22 = &gDefaultServerClasses;
        while ( *(_WORD *)(v7 + 8) != *(_WORD *)(gpsi + 2LL * ((*v22 >> 3) & 0x1F) + 852) )
        {
          ++v21;
          v22 += 12;
          if ( v21 >= 8 )
            goto LABEL_34;
        }
        if ( a3 < *((unsigned int *)&gDefaultServerClasses + 12 * v21 + 6) )
          goto LABEL_84;
LABEL_34:
        a1 = v52;
      }
      if ( a2 != -32 )
      {
        v10 = a2 + 34;
        if ( v10 >= 0 )
        {
          v11 = v10;
          if ( *((_BYTE *)&dword_1C02E52A4[15] + v10) )
          {
            _mm_lfence();
            v12 = *(_QWORD *)(v7 + 64);
            v13 = (_DWORD *)(v12 + *((unsigned __int8 *)&dword_1C02E52A4[15] + v10));
            v14 = *((_BYTE *)&dword_1C02E52A4[25] + v10);
            if ( v14 == 4 )
            {
              v15 = (unsigned int)*v13;
              *v13 = a3;
              if ( (_DWORD)v15 != (_DWORD)a3 && v10 == 8 && (unsigned int)IsWindowDesktopComposed(a1) )
              {
                ClassStyle = DwmGetClassStyle((__int64)v52);
                v29 = (void *)ReferenceDwmApiPort(v26, v25, v27, v28);
                DwmAsyncChildStyleChange(v29, *(_QWORD *)v52, -26, ClassStyle);
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
              v30 = *((unsigned __int8 *)&dword_1C02E52A4[15] + v11);
              v31 = *((_BYTE *)&dword_1C02E52A4[25] + v11);
              do
              {
                if ( v31 == 4 )
                {
                  v15 = *(unsigned int *)((char *)v16 + v30);
                  *(_DWORD *)((char *)v16 + v30) = v5;
                }
                else if ( v31 == 8 )
                {
                  v15 = *(_QWORD *)((char *)v16 + v30);
                  *(_QWORD *)((char *)v16 + v30) = v5;
                }
                else
                {
                  v15 = *(unsigned __int16 *)((char *)v16 + v30);
                  *(_WORD *)((char *)v16 + v30) = v5;
                }
                v16 = (_QWORD *)*v16;
              }
              while ( v16 );
            }
            return v15;
          }
        }
        v23 = 1413;
        goto LABEL_85;
      }
      goto LABEL_35;
  }
}
