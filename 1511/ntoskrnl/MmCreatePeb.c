/*
 * XREFs of MmCreatePeb @ 0x140463D38
 * Callers:
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140035E48 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     MmGetSessionId @ 0x140038610 (MmGetSessionId.c)
 *     KeQueryGroupAffinity @ 0x14009B2D4 (KeQueryGroupAffinity.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiCreatePebOrTeb @ 0x1403F2500 (MiCreatePebOrTeb.c)
 *     MiInitializeWowPeb @ 0x140461E70 (MiInitializeWowPeb.c)
 *     MmMapViewOfSection @ 0x1404644F4 (MmMapViewOfSection.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmCreatePeb(_KPROCESS *a1, char *a2, __int64 *a3, _QWORD *a4)
{
  unsigned int v6; // eax
  int PebOrTeb; // ebx
  void *v8; // rbx
  __int16 v9; // r14
  __int64 v10; // rdi
  PIMAGE_NT_HEADERS v11; // rsi
  _WORD *v12; // rax
  _WORD *v13; // rbx
  int Subsystem; // r12d
  int MajorSubsystemVersion; // r13d
  unsigned int Win32VersionValue; // edx
  _QWORD *v17; // rax
  __int64 v18; // rbx
  bool v19; // zf
  char v21; // di
  char v22; // di
  __int64 v23; // rbx
  unsigned __int16 Characteristics; // [rsp+50h] [rbp-188h]
  USHORT v26; // [rsp+60h] [rbp-178h]
  __int64 v27; // [rsp+68h] [rbp-170h] BYREF
  __int64 v28; // [rsp+70h] [rbp-168h] BYREF
  _IMAGE_NT_HEADERS64 *v29; // [rsp+78h] [rbp-160h]
  __int64 v30; // [rsp+80h] [rbp-158h] BYREF
  __int64 v31; // [rsp+90h] [rbp-148h] BYREF
  int MinorSubsystemVersion; // [rsp+98h] [rbp-140h]
  __int64 v33; // [rsp+9Ch] [rbp-13Ch]
  unsigned int v34; // [rsp+A4h] [rbp-134h]
  __int16 v35; // [rsp+A8h] [rbp-130h]
  __int16 v36; // [rsp+AAh] [rbp-12Eh]
  __int64 v37; // [rsp+B0h] [rbp-128h]
  __int64 v38; // [rsp+B8h] [rbp-120h]
  int v39; // [rsp+C0h] [rbp-118h]
  ULONG v40; // [rsp+C4h] [rbp-114h]
  int v41; // [rsp+C8h] [rbp-110h]
  int SessionId; // [rsp+CCh] [rbp-10Ch]
  __int64 v43; // [rsp+D0h] [rbp-108h]
  __int64 v44; // [rsp+D8h] [rbp-100h]
  __int64 v45; // [rsp+E0h] [rbp-F8h]
  __int64 v46; // [rsp+E8h] [rbp-F0h]
  __int64 v47; // [rsp+F0h] [rbp-E8h]
  char v48; // [rsp+F8h] [rbp-E0h]
  char v49; // [rsp+F9h] [rbp-DFh]
  __int64 v50; // [rsp+100h] [rbp-D8h]
  void *v51; // [rsp+108h] [rbp-D0h]
  __int64 v52; // [rsp+110h] [rbp-C8h]
  __int64 v53; // [rsp+118h] [rbp-C0h]
  __int64 v54; // [rsp+120h] [rbp-B8h]
  _WORD *v55; // [rsp+130h] [rbp-A8h]
  _KPROCESS *Process; // [rsp+138h] [rbp-A0h]
  __int64 *v57; // [rsp+140h] [rbp-98h]
  void *v58; // [rsp+148h] [rbp-90h]
  __int64 v59; // [rsp+150h] [rbp-88h] BYREF
  ULONG Size; // [rsp+158h] [rbp-80h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v61; // [rsp+160h] [rbp-78h] BYREF

  v57 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v28 = 0LL;
  v30 = 0LL;
  v59 = 0LL;
  *a4 = 0LL;
  a4[1] = 0LL;
  _BitScanForward(&v6, (*(_DWORD *)&a1->0 >> 8) & 0xFFFFF);
  v26 = v6;
  *((_WORD *)a4 + 4) = v6;
  KiStackAttachProcess(a1, 0LL, (__int64)&v61);
  PebOrTeb = MmMapViewOfSection(
               (_DWORD)InitNlsSectionPointer,
               (_DWORD)a1,
               (unsigned int)&v28,
               0,
               0LL,
               (__int64)&v30,
               (__int64)&v59,
               1,
               5242880,
               2);
  if ( PebOrTeb < 0 )
    goto LABEL_27;
  PebOrTeb = MiCreatePebOrTeb(4, 0LL, (unsigned __int64 *)&v27);
  if ( PebOrTeb < 0 )
    goto LABEL_27;
  v8 = (void *)a1[1].Affinity.Bitmap[18];
  v58 = v8;
  v33 = 10LL;
  v35 = 10586;
  v34 = 2;
  v9 = CmNtCSDVersion;
  v36 = CmNtCSDVersion;
  v37 = qword_140381138;
  v38 = qword_140381130;
  v39 = KeNumberProcessors_0;
  v40 = NtGlobalFlag;
  v43 = qword_1402FE690;
  v45 = (unsigned int)dword_140381114;
  v46 = qword_140381128;
  v47 = qword_140381120;
  v48 = *a2;
  v49 = a2[3];
  v50 = *((_QWORD *)a2 + 1);
  v51 = v8;
  v52 = v28 + (unsigned int)InitAnsiCodePageDataOffset;
  v53 = v28 + (unsigned int)InitOemCodePageDataOffset;
  v54 = v28 + (unsigned int)InitUnicodeCaseTableDataOffset;
  if ( a1[1].ActiveProcessors.Bitmap[2] )
    SessionId = MmGetSessionId(a1);
  else
    SessionId = 0;
  v41 = 268;
  v10 = v27;
  v44 = v27 + 1952;
  v11 = RtlImageNtHeader(v8);
  v29 = v11;
  Characteristics = v11->FileHeader.Characteristics;
  if ( a1[1].ActiveProcessors.Bitmap[7] )
  {
    v31 = 0LL;
    MinorSubsystemVersion = 0;
  }
  v12 = RtlImageDirectoryEntryToData(v8, 1u, 0xAu, &Size);
  v13 = v12;
  v55 = v12;
  if ( v12 )
  {
    if ( ((unsigned __int8)v12 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = v27;
    v9 = v36;
    v11 = v29;
    v13 = v55;
  }
  Subsystem = v11->OptionalHeader.Subsystem;
  LODWORD(v31) = Subsystem;
  MajorSubsystemVersion = v11->OptionalHeader.MajorSubsystemVersion;
  HIDWORD(v31) = MajorSubsystemVersion;
  MinorSubsystemVersion = v11->OptionalHeader.MinorSubsystemVersion;
  Win32VersionValue = v11->OptionalHeader.Win32VersionValue;
  if ( Win32VersionValue )
  {
    LODWORD(v33) = (unsigned __int8)Win32VersionValue;
    HIDWORD(v33) = BYTE1(Win32VersionValue);
    v35 = HIWORD(Win32VersionValue) & 0x3FFF;
    if ( v13 )
    {
      if ( v13[38] )
        v9 = v13[38];
      v36 = v9;
    }
    v34 = (Win32VersionValue ^ 0xBFFFFFFF) >> 30;
  }
  v17 = a4;
  if ( v13 )
  {
    v18 = *((_QWORD *)v13 + 8);
    *a4 = v18;
    v19 = (v18 & KeQueryGroupAffinity(v26)) == v18;
    v17 = a4;
    if ( !v19 )
      *a4 = 0LL;
  }
  if ( (Characteristics & 0x4000) != 0 )
  {
    v21 = _InterlockedExchangeAdd(&dword_1402FE688, 1u) + 1;
    do
    {
      v22 = v21 & 0x3F;
      v23 = 1LL << v22;
      *v17 = 1LL << v22;
      v21 = v22 + 1;
      v19 = (KeQueryGroupAffinity(v26) & v23) == 0;
      v17 = a4;
    }
    while ( v19 );
    v10 = v27;
    v9 = v36;
    MajorSubsystemVersion = HIDWORD(v31);
    Subsystem = v31;
    v11 = v29;
  }
  *(_QWORD *)(v10 + 280) = v33;
  *(_WORD *)(v10 + 288) = v35;
  *(_DWORD *)(v10 + 292) = v34;
  *(_WORD *)(v10 + 290) = v9;
  *(_QWORD *)(v10 + 200) = v37;
  *(_QWORD *)(v10 + 208) = v38;
  *(_DWORD *)(v10 + 184) = KeNumberProcessors_0;
  *(_DWORD *)(v10 + 188) = NtGlobalFlag;
  *(_QWORD *)(v10 + 192) = qword_1402FE690;
  *(_QWORD *)(v10 + 792) = (unsigned int)dword_140381114;
  *(_QWORD *)(v10 + 240) = v44;
  *(_QWORD *)(v10 + 216) = qword_140381128;
  *(_QWORD *)(v10 + 224) = qword_140381120;
  *(_DWORD *)(v10 + 236) = 268;
  *(_DWORD *)(v10 + 704) = SessionId;
  *(_DWORD *)(v10 + 296) = Subsystem;
  *(_DWORD *)(v10 + 300) = MajorSubsystemVersion;
  *(_DWORD *)(v10 + 304) = MinorSubsystemVersion;
  *(_BYTE *)v10 = v48;
  *(_BYTE *)(v10 + 3) = v49;
  *(_QWORD *)(v10 + 8) = v50;
  *(_QWORD *)(v10 + 16) = v58;
  *(_QWORD *)(v10 + 160) = v52;
  *(_QWORD *)(v10 + 168) = v53;
  *(_QWORD *)(v10 + 176) = v54;
  if ( !Process[1].ActiveProcessors.Bitmap[7] && !a1[1].ActiveProcessors.Bitmap[7] )
    goto LABEL_23;
  PebOrTeb = MiInitializeWowPeb((__int64)&v31, (__int64)v11, v10, (__int64)a1, (__int64)a4);
  if ( PebOrTeb < 0 )
  {
LABEL_27:
    KiUnstackDetachProcess(&v61, 0LL);
    return (unsigned int)PebOrTeb;
  }
  else
  {
LABEL_23:
    KiUnstackDetachProcess(&v61, 0LL);
    *v57 = v10;
    return 0LL;
  }
}
