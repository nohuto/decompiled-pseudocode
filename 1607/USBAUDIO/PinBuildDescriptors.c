/*
 * XREFs of PinBuildDescriptors @ 0x1C0015DB4
 * Callers:
 *     FilterCreateFilterFactory @ 0x1C0014E64 (FilterCreateFilterFactory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007440 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008380 (memset.c)
 *     PinGetTerminalUnit @ 0x1C0015D84 (PinGetTerminalUnit.c)
 */

__int64 __fastcall PinBuildDescriptors(__int64 a1, _QWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v5; // edi
  unsigned int v6; // r10d
  unsigned int v7; // r11d
  unsigned int v8; // ebx
  unsigned int v9; // r12d
  unsigned int v10; // r15d
  __int64 *v11; // rax
  __int64 v12; // r14
  unsigned int v13; // esi
  int v14; // eax
  NTSTATUS v15; // edi
  unsigned int v16; // edx
  unsigned __int64 v17; // rcx
  unsigned int v18; // r8d
  unsigned __int64 v19; // rax
  unsigned int v20; // edx
  unsigned __int64 v21; // rax
  unsigned int v22; // ecx
  unsigned __int64 v23; // rbx
  unsigned int v24; // r15d
  PVOID PoolWithTag; // rax
  _QWORD *v26; // rsi
  char *v27; // r10
  char *v28; // r13
  __int64 v29; // r14
  char *v30; // rbx
  __int64 v31; // rsi
  _QWORD *v32; // r13
  _QWORD *TerminalUnit; // rax
  __int64 v34; // rdx
  __int64 v35; // r10
  bool v36; // r15
  char *v37; // rcx
  __int64 v38; // r9
  bool v39; // r8
  __int64 v40; // r10
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // r9
  __int64 v44; // rcx
  _QWORD *v45; // rax
  int v46; // edx
  _QWORD *v47; // rcx
  NTSTATUS v48; // r10d
  _QWORD *v49; // rax
  unsigned int v50; // r15d
  _QWORD *v51; // rbx
  __int64 v52; // r12
  int v53; // edx
  _QWORD *v54; // rcx
  _QWORD *v55; // rax
  char v56; // r9
  __int64 v57; // r10
  int v58; // r11d
  char v59; // dl
  int v60; // eax
  _UNKNOWN **v61; // rax
  _QWORD *v62; // rax
  int v63; // edx
  __int64 v64; // r10
  int v65; // r11d
  __int64 v66; // r9
  _QWORD *v67; // r10
  unsigned __int16 *v68; // rdx
  __int64 v69; // r8
  int v70; // ecx
  GUID v71; // xmm0
  int v72; // eax
  GUID v73; // xmm0
  unsigned int v75; // [rsp+58h] [rbp-59h]
  int v76; // [rsp+5Ch] [rbp-55h] BYREF
  __int64 v77; // [rsp+60h] [rbp-51h] BYREF
  unsigned int v78; // [rsp+68h] [rbp-49h]
  char *v79; // [rsp+70h] [rbp-41h] BYREF
  unsigned __int64 v80; // [rsp+78h] [rbp-39h] BYREF
  _QWORD *v81; // [rsp+80h] [rbp-31h]
  char *v82; // [rsp+88h] [rbp-29h]
  _QWORD *v83; // [rsp+90h] [rbp-21h]
  char *v84; // [rsp+98h] [rbp-19h]
  __int64 v85; // [rsp+A0h] [rbp-11h]
  unsigned int v87; // [rsp+128h] [rbp+77h]
  unsigned int v88; // [rsp+130h] [rbp+7Fh]

  v5 = 0;
  v6 = 0;
  v85 = *(_QWORD *)(a1 + 16);
  v7 = 0;
  v76 = 0;
  v8 = 0;
  v87 = 0;
  v9 = 0;
  v75 = 0;
  v88 = 0;
  v10 = 0;
  v11 = *(__int64 **)(v85 + 80);
  v81 = (_QWORD *)(v85 + 80);
  v78 = 0;
  if ( v11 != (__int64 *)(v85 + 80) )
  {
    do
    {
      if ( *((_DWORD *)v11 + 5) <= 1u )
      {
        if ( *((_BYTE *)v11 + 72) )
          ++v9;
        else
          ++v10;
      }
      v11 = (__int64 *)*v11;
    }
    while ( v11 != (__int64 *)(v85 + 80) );
    v78 = v10;
  }
  v12 = v9 + v10;
  v13 = 0;
  *a3 = v12;
  *a4 = 176;
  if ( v9 )
  {
    do
    {
      LODWORD(v79) = 0;
      LODWORD(v80) = 0;
      LODWORD(v77) = 0;
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, int *, char **, unsigned __int64 *, __int64 *))(pExtBusDeviceDispatchTable + 64))(
              a1,
              v13,
              0LL,
              0LL,
              0LL,
              &v76,
              &v79,
              &v80,
              &v77);
      v6 = v87;
      v7 = v75;
      v15 = v14;
      v8 = v88;
      if ( v14 >= 0 )
      {
        v6 = (_DWORD)v79 + v87;
        v7 = v80 + v75;
        v8 = v77 + v88;
        v88 += v77;
        v87 += (unsigned int)v79;
        v75 += v80;
      }
      ++v13;
    }
    while ( v13 < v9 );
    v10 = v78;
    if ( v14 < 0 )
      return (unsigned int)v15;
    v5 = v76;
  }
  v16 = 336 * v12;
  if ( (unsigned __int64)(336 * v12) > 0xFFFFFFFF )
    return (unsigned int)-1073741670;
  v17 = v6 * (unsigned __int64)(unsigned int)(v5 + 8);
  if ( v17 > 0xFFFFFFFF )
    return (unsigned int)-1073741670;
  v18 = v17 + v16;
  if ( (unsigned int)v17 + v16 < v16 )
    return (unsigned int)-1073741670;
  v19 = 8LL * v7;
  if ( v19 > 0xFFFFFFFF )
    return (unsigned int)-1073741670;
  v20 = v19 + v18;
  if ( (unsigned int)v19 + v18 < v18 )
    return (unsigned int)-1073741670;
  v21 = 16LL * v8;
  if ( v21 > 0xFFFFFFFF )
    return (unsigned int)-1073741670;
  v22 = v21 + v20;
  if ( (unsigned int)v21 + v20 < v20 )
    return (unsigned int)-1073741670;
  v23 = 16LL * v10;
  if ( v23 <= 0xFFFFFFFF
    && (unsigned int)v23 + v22 >= v22
    && (v24 = v23 + v22,
        v15 = 0,
        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned int)v23 + v22, 0x41627845u),
        v83 = PoolWithTag,
        v26 = PoolWithTag,
        (*a2 = PoolWithTag) != 0LL) )
  {
    memset(PoolWithTag, 0, v24);
    v27 = (char *)&v26[22 * v12];
    v28 = &v27[160 * v12];
    v82 = v27;
    v29 = 0LL;
    v84 = v28;
    v79 = &v28[v23];
    v77 = (__int64)&v28[16 * v88 + v23];
    v80 = v77 + 8 * (v87 + (unsigned __int64)v75);
    if ( v9 )
    {
      v30 = (char *)v26 + 68;
      v31 = v77;
      v32 = v27 + 8;
      do
      {
        if ( v15 < 0 )
          break;
        TerminalUnit = PinGetTerminalUnit(v81, v29);
        v36 = TerminalUnit && *((_DWORD *)TerminalUnit + 17) == 257 && *((_DWORD *)TerminalUnit + 19) == 2;
        *(_QWORD *)(v30 - 68) = &PinDispatch;
        if ( v36 )
        {
          *(_QWORD *)(v30 - 60) = 0LL;
        }
        else
        {
          *(_QWORD *)(v30 - 60) = v35 + 48 * v29;
          *((_DWORD *)v32 - 2) = 5;
          *((_DWORD *)v32 - 1) = 72;
          *v32 = &off_1C000A1A0;
        }
        *((_DWORD *)v30 - 13) = 1;
        *(_QWORD *)(v30 - 44) = &PinInterface;
        *((_DWORD *)v30 - 9) = 1;
        *(_QWORD *)(v30 - 28) = &PinMedium;
        v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(pExtBusDeviceDispatchTable + 64))(a1, v34, v31);
        if ( v15 >= 0 )
        {
          v37 = v79;
          v38 = v77;
          *(_QWORD *)(v30 + 100) = v79;
          *((_DWORD *)v30 + 23) = v88;
          v79 = &v37[16 * v88];
          *((_DWORD *)v30 - 5) = v75 + v87;
          *(_QWORD *)(v30 - 12) = v38;
          if ( v87 <= 1 )
          {
            v30[80] = 0;
            *((_DWORD *)v30 + 10) = 1;
            *((_DWORD *)v30 + 17) = 1;
          }
          else
          {
            *((_DWORD *)v30 + 17) = 1;
            v39 = 0;
            v40 = *(_QWORD *)v38;
            v41 = v38;
            v42 = (unsigned int)((*(_DWORD *)(*(_QWORD *)v38 + 4LL) & 2) != 0) + 1;
            if ( (unsigned int)v42 < v75 + v87 )
            {
              do
              {
                if ( v39 )
                  break;
                v43 = *(_QWORD *)(v41 + 8 * v42);
                v44 = *(_QWORD *)(v40 + 32) - *(_QWORD *)(v43 + 32);
                if ( !v44 )
                  v44 = *(_QWORD *)(v40 + 40) - *(_QWORD *)(v43 + 40);
                v39 = v44 != 0;
                v42 = ((*(_DWORD *)(v43 + 4) & 2) != 0) + 1 + (unsigned int)v42;
              }
              while ( (unsigned int)v42 < v75 + v87 );
              v38 = v41;
            }
            v30[80] = v39;
            *((_DWORD *)v30 + 10) = v39 + 1;
          }
          *((_DWORD *)v30 + 11) = 0;
          *((_DWORD *)v30 + 18) = 0;
          v15 = -1073741275;
          v77 = v38 + 8LL * (v87 + v75);
          v80 += v76 * v87;
          v45 = PinGetTerminalUnit(v81, v29);
          if ( v45 )
          {
            *((_DWORD *)v30 - 1) = (*((_DWORD *)v45 + 5) != 0) + 1;
            v15 = 0;
            v47 = v81;
          }
          if ( v15 >= 0 )
          {
            *((_DWORD *)v30 + 9) = 2;
            if ( v36 )
            {
              *(_QWORD *)(v30 + 60) = PinMIDIDataFormatIntersection;
              *(_QWORD *)(v30 + 4) = &KSCATEGORY_WDMAUD_USE_PIN_NAME;
              if ( *((_DWORD *)v30 - 1) == 1 )
              {
                *(_DWORD *)v30 = 1;
                *((_DWORD *)v30 + 9) |= 0x210000u;
              }
              else
              {
                *(_DWORD *)v30 = 3;
                *((_DWORD *)v30 + 9) |= 8u;
              }
            }
            else
            {
              *(_QWORD *)(v30 + 60) = PinDataFormatIntersection;
              if ( *((_DWORD *)v30 - 1) == 1 )
              {
                *(_DWORD *)v30 = 1;
                *(_QWORD *)(v30 + 4) = &KSCATEGORY_AUDIO;
                *((_DWORD *)v30 + 9) |= 0x210000u;
              }
              else
              {
                *(_DWORD *)v30 = 3;
                *(_QWORD *)(v30 + 4) = &PINNAME_VIDEO_CAPTURE;
                *((_DWORD *)v30 + 9) |= 0x10000u;
              }
              v15 = v48;
              v49 = PinGetTerminalUnit(v47, v46);
              if ( v49 )
              {
                v15 = 0;
                *((_DWORD *)v30 + 19) = *((_DWORD *)v49 + 7);
              }
            }
            *(_QWORD *)(v30 + 52) = &AllocatorFraming;
          }
          v31 = v77;
        }
        v29 = (unsigned int)(v29 + 1);
        v32 += 6;
        v30 += 176;
      }
      while ( (unsigned int)v29 < v9 );
      v26 = v83;
      v28 = v84;
    }
    v50 = v78;
    if ( v78 )
    {
      v51 = v81;
      v52 = v85;
      while ( 1 )
      {
        if ( v15 < 0 )
          goto LABEL_106;
        PinGetTerminalUnit(v51, v29);
        v26[22 * (unsigned int)v29 + 17] = 0LL;
        v55 = PinGetTerminalUnit(v54, v53);
        v59 = 0;
        if ( v55 )
        {
          if ( *((_DWORD *)v55 + 5) == 1 )
          {
            v60 = *((_DWORD *)v55 + 17) - 1538;
            if ( !v60 || v60 == 3 )
              v59 = 1;
          }
        }
        *((_BYTE *)v26 + v57 + 149) = v59;
        *(_QWORD *)((char *)v26 + v57) = 0LL;
        *(_QWORD *)((char *)v26 + v57 + 8) = 0LL;
        *(_QWORD *)((char *)v26 + v57 + 108) = 0LL;
        *(_QWORD *)((char *)v26 + v57 + 24) = &PinInterface;
        v15 = -1073741275;
        *(_QWORD *)((char *)v26 + v57 + 40) = &PinMedium;
        v61 = &pAudioBridgePinFormats;
        if ( v56 )
          v61 = &pMIDIBridgePinFormats;
        *(_DWORD *)((char *)v26 + v57 + 16) = 1;
        *(_DWORD *)((char *)v26 + v57 + 32) = 1;
        *(_QWORD *)((char *)v26 + v57 + 72) = &v28[16 * v58];
        *(_DWORD *)((char *)v26 + v57 + 48) = 1;
        *(_QWORD *)((char *)v26 + v57 + 56) = v61;
        *(_DWORD *)((char *)v26 + v57 + 68) = 4;
        v62 = PinGetTerminalUnit(v51, v29);
        if ( v62 )
        {
          *(_DWORD *)((char *)v26 + v64 + 64) = (*((_DWORD *)v62 + 5) != 0) + 1;
          v15 = 0;
        }
        if ( v15 >= 0 )
        {
          v67 = PinGetTerminalUnit(v51, v63);
          v68 = (unsigned __int16 *)&unk_1C000AAF2;
          v69 = 0LL;
          while ( *(_DWORD *)(v52 + 40) != *(v68 - 1) || *(_DWORD *)(v52 + 44) != *v68 )
          {
            v69 = (unsigned int)(v69 + 1);
            v68 += 4;
            if ( (unsigned int)v69 >= 0xA )
            {
              LOBYTE(v70) = 0;
              goto LABEL_79;
            }
          }
          v70 = dword_1C000AAF4[2 * v69];
LABEL_79:
          *(GUID *)v66 = GUID_NULL;
          if ( v67 )
            break;
        }
LABEL_103:
        LODWORD(v29) = v29 + 1;
        if ( v65 + 1 >= v50 )
          goto LABEL_104;
      }
      if ( *((_DWORD *)v67 + 17) == 2305 )
      {
        v71 = KSCATEGORY_AUDIO;
LABEL_102:
        *(GUID *)v66 = v71;
        goto LABEL_103;
      }
      v72 = *((unsigned __int16 *)v67 + 34) - 537781792;
      *(_DWORD *)(v66 + 4) = 298907407;
      *(_DWORD *)v66 = v72;
      *(_DWORD *)(v66 + 8) = -1610606663;
      *(_DWORD *)(v66 + 12) = -1775164727;
      if ( (v70 & 1) != 0 )
      {
        if ( *(_QWORD *)v66 == *(_QWORD *)&KSNODETYPE_SPEAKER.Data1
          && *(_QWORD *)(v66 + 8) == *(_QWORD *)KSNODETYPE_SPEAKER.Data4 )
        {
          v73 = KSNODETYPE_COMMUNICATION_SPEAKER;
        }
        else
        {
          if ( *(_QWORD *)v66 != *(_QWORD *)&KSNODETYPE_MICROPHONE.Data1
            || *(_QWORD *)(v66 + 8) != *(_QWORD *)KSNODETYPE_MICROPHONE.Data4 )
          {
            goto LABEL_97;
          }
          v73 = KSNODETYPE_PERSONAL_MICROPHONE;
        }
      }
      else
      {
        if ( (v70 & 2) == 0
          || (*(_QWORD *)v66 != *(_QWORD *)&KSNODETYPE_SPEAKER.Data1
           || *(_QWORD *)(v66 + 8) != *(_QWORD *)KSNODETYPE_SPEAKER.Data4)
          && (*(_QWORD *)v66 != *(_QWORD *)&KSNODETYPE_MICROPHONE.Data1
           || *(_QWORD *)(v66 + 8) != *(_QWORD *)KSNODETYPE_MICROPHONE.Data4) )
        {
          goto LABEL_97;
        }
        v73 = KSNODETYPE_HANDSET;
      }
      *(GUID *)v66 = v73;
LABEL_97:
      if ( *(_QWORD *)v66 != *(_QWORD *)&KSNODETYPE_HEADSET.Data1
        || *(_QWORD *)(v66 + 8) != *(_QWORD *)KSNODETYPE_HEADSET.Data4 )
      {
        goto LABEL_103;
      }
      if ( *((_DWORD *)v67 + 5) )
        v71 = KSNODETYPE_COMMUNICATION_SPEAKER;
      else
        v71 = KSNODETYPE_PERSONAL_MICROPHONE;
      goto LABEL_102;
    }
LABEL_104:
    if ( v15 < 0 || (v15 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v26, ExFreePool), v15 < 0) )
LABEL_106:
      ExFreePool(v26);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v15;
}
