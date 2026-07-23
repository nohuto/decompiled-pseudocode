/*
 * XREFs of MmCreatePeb @ 0x14046AF88
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 * Callees:
 *     MmGetSessionId @ 0x140013CE0 (MmGetSessionId.c)
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     RtlImageDirectoryEntryToData @ 0x14007BB6C (RtlImageDirectoryEntryToData.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     KeQueryGroupAffinity @ 0x1400F8D14 (KeQueryGroupAffinity.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MmMapViewOfSection @ 0x14046AEB8 (MmMapViewOfSection.c)
 *     MiCreatePebOrTeb @ 0x1404EE1C0 (MiCreatePebOrTeb.c)
 *     MiInitializeWowPeb @ 0x1404FF1B4 (MiInitializeWowPeb.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmCreatePeb(_KPROCESS *a1, char *a2, _QWORD *a3, _QWORD *a4)
{
  unsigned int v6; // eax
  int v7; // ebx
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
  unsigned __int16 Characteristics; // [rsp+50h] [rbp-178h]
  USHORT v26; // [rsp+60h] [rbp-168h]
  __int64 v27; // [rsp+68h] [rbp-160h] BYREF
  __int64 v28; // [rsp+70h] [rbp-158h] BYREF
  char *v29; // [rsp+78h] [rbp-150h] BYREF
  _IMAGE_NT_HEADERS64 *v30; // [rsp+80h] [rbp-148h]
  __int64 v31; // [rsp+90h] [rbp-138h] BYREF
  int MinorSubsystemVersion; // [rsp+98h] [rbp-130h]
  __int64 v33; // [rsp+9Ch] [rbp-12Ch]
  unsigned int v34; // [rsp+A4h] [rbp-124h]
  __int16 v35; // [rsp+A8h] [rbp-120h]
  __int16 v36; // [rsp+AAh] [rbp-11Eh]
  __int64 v37; // [rsp+B0h] [rbp-118h]
  __int64 v38; // [rsp+B8h] [rbp-110h]
  int v39; // [rsp+C0h] [rbp-108h]
  ULONG v40; // [rsp+C4h] [rbp-104h]
  int v41; // [rsp+C8h] [rbp-100h]
  int SessionId; // [rsp+CCh] [rbp-FCh]
  __int64 v43; // [rsp+D0h] [rbp-F8h]
  __int64 v44; // [rsp+D8h] [rbp-F0h]
  __int64 v45; // [rsp+E0h] [rbp-E8h]
  __int64 v46; // [rsp+E8h] [rbp-E0h]
  __int64 v47; // [rsp+F0h] [rbp-D8h]
  char v48; // [rsp+F8h] [rbp-D0h]
  char v49; // [rsp+F9h] [rbp-CFh]
  __int64 v50; // [rsp+100h] [rbp-C8h]
  void *v51; // [rsp+108h] [rbp-C0h]
  char *v52; // [rsp+110h] [rbp-B8h]
  char *v53; // [rsp+118h] [rbp-B0h]
  char *v54; // [rsp+120h] [rbp-A8h]
  ULONG Size; // [rsp+130h] [rbp-98h] BYREF
  size_t v56; // [rsp+138h] [rbp-90h] BYREF
  _WORD *v57; // [rsp+140h] [rbp-88h]
  void *v58; // [rsp+148h] [rbp-80h]
  _QWORD *v59; // [rsp+150h] [rbp-78h]
  _BYTE v60[48]; // [rsp+158h] [rbp-70h] BYREF

  v59 = a3;
  v29 = 0LL;
  v28 = 0LL;
  v56 = 0LL;
  *a4 = 0LL;
  a4[1] = 0LL;
  _BitScanForward(&v6, (*(_DWORD *)&a1->0 >> 8) & 0xFFFFF);
  v26 = v6;
  *((_WORD *)a4 + 4) = v6;
  KiStackAttachProcess(a1, 0, (__int64)v60);
  v7 = MmMapViewOfSection((__int64)InitNlsSectionPointer, a1, (void **)&v29, 0LL, 0LL, &v28, &v56, 1, 0x500000u, 2u);
  if ( v7 < 0 )
    goto LABEL_26;
  v7 = MiCreatePebOrTeb(4LL, 0LL, &v27);
  if ( v7 < 0 )
    goto LABEL_26;
  v8 = (void *)a1[1].Affinity.Bitmap[18];
  v58 = v8;
  v33 = 10LL;
  v35 = 14393;
  v34 = 2;
  v9 = CmNtCSDVersion;
  v36 = CmNtCSDVersion;
  v37 = qword_1403A9180;
  v38 = qword_1403A9178;
  v39 = KeNumberProcessors_0;
  v40 = NtGlobalFlag;
  v43 = qword_1403269B0;
  v45 = (unsigned int)dword_1403A915C;
  v46 = qword_1403A9170;
  v47 = qword_1403A9168;
  v48 = *a2;
  v49 = a2[3];
  v50 = *((_QWORD *)a2 + 1);
  v51 = v8;
  v52 = &v29[InitAnsiCodePageDataOffset];
  v53 = &v29[InitOemCodePageDataOffset];
  v54 = &v29[InitUnicodeCaseTableDataOffset];
  if ( a1[1].ActiveProcessors.Bitmap[2] )
    SessionId = MmGetSessionId(a1);
  else
    SessionId = 0;
  v41 = 268;
  v10 = v27;
  v44 = v27 + 1952;
  v11 = RtlImageNtHeader(v8);
  v30 = v11;
  Characteristics = v11->FileHeader.Characteristics;
  if ( a1[1].ActiveProcessors.Bitmap[7] )
  {
    v31 = 0LL;
    MinorSubsystemVersion = 0;
  }
  v12 = RtlImageDirectoryEntryToData(v8, 1u, 0xAu, &Size);
  v13 = v12;
  v57 = v12;
  if ( v12 )
  {
    if ( ((unsigned __int8)v12 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = v27;
    v9 = v36;
    v11 = v30;
    v13 = v57;
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
    v21 = _InterlockedExchangeAdd(&dword_1403269A8, 1u) + 1;
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
    LODWORD(v11) = (_DWORD)v30;
  }
  *(_QWORD *)(v10 + 280) = v33;
  *(_WORD *)(v10 + 288) = v35;
  *(_DWORD *)(v10 + 292) = v34;
  *(_WORD *)(v10 + 290) = v9;
  *(_QWORD *)(v10 + 200) = v37;
  *(_QWORD *)(v10 + 208) = v38;
  *(_DWORD *)(v10 + 184) = KeNumberProcessors_0;
  *(_DWORD *)(v10 + 188) = NtGlobalFlag;
  *(_QWORD *)(v10 + 192) = qword_1403269B0;
  *(_QWORD *)(v10 + 792) = (unsigned int)dword_1403A915C;
  *(_QWORD *)(v10 + 240) = v44;
  *(_QWORD *)(v10 + 216) = qword_1403A9170;
  *(_QWORD *)(v10 + 224) = qword_1403A9168;
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
  if ( !a1[1].ActiveProcessors.Bitmap[7] )
    goto LABEL_22;
  v7 = MiInitializeWowPeb((unsigned int)&v31, (_DWORD)v11, v10, (_DWORD)a1, (__int64)a4);
  if ( v7 < 0 )
  {
LABEL_26:
    KiUnstackDetachProcess((struct _KTHREAD *)v60, 0);
    return (unsigned int)v7;
  }
  else
  {
LABEL_22:
    KiUnstackDetachProcess((struct _KTHREAD *)v60, 0);
    *v59 = v10;
    return 0LL;
  }
}
