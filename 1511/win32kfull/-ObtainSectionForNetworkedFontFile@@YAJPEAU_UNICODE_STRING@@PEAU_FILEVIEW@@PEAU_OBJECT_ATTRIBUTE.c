/*
 * XREFs of ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C027DCD8
 * Callers:
 *     ?bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00A68E4 (-bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z.c)
 * Callees:
 *     ??1MALLOCOBJ@@QEAA@XZ @ 0x1C001A964 (--1MALLOCOBJ@@QEAA@XZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C001A988 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ZwWin32CreateSection @ 0x1C00A4F4C (ZwWin32CreateSection.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C01C2DCC (--1SEMOBJ@@QEAA@XZ.c)
 *     Win32DestroySection @ 0x1C01D3948 (Win32DestroySection.c)
 *     Win32OpenSectionByHandle @ 0x1C01D3950 (Win32OpenSectionByHandle.c)
 *     ZwWin32CreateSectionRetainHandle @ 0x1C01D398C (ZwWin32CreateSectionRetainHandle.c)
 *     ?bCopySection@@YAHPEAX0_K@Z @ 0x1C027DF54 (-bCopySection@@YAHPEAX0_K@Z.c)
 *     ?bUnreferenceNetworkedFontFileNode@@YA_NPEAU_NETWORKED_FONT_FONT_FILE_NODE@@@Z @ 0x1C027E3EC (-bUnreferenceNetworkedFontFileNode@@YA_NPEAU_NETWORKED_FONT_FONT_FILE_NODE@@@Z.c)
 */

__int64 __fastcall ObtainSectionForNetworkedFontFile(
        PCUNICODE_STRING SourceString,
        PVOID *a2,
        struct _OBJECT_ATTRIBUTES *a3,
        union _LARGE_INTEGER *a4,
        bool a5)
{
  unsigned int v6; // r15d
  int SectionRetainHandle; // esi
  void **v10; // rax
  void **SectionHandle; // rdi
  unsigned int v12; // edi
  char *v13; // rbx
  void **inserted; // rax
  void **v15; // rbx
  __int64 v16; // rdx
  int v17; // edx
  __int64 v18; // r8
  int v19; // eax
  int v21; // [rsp+28h] [rbp-69h]
  int v22; // [rsp+28h] [rbp-69h]
  void *v23; // [rsp+38h] [rbp-59h]
  void *v24; // [rsp+38h] [rbp-59h]
  int v25; // [rsp+40h] [rbp-51h]
  PVOID Object; // [rsp+50h] [rbp-41h] BYREF
  __int64 v27; // [rsp+58h] [rbp-39h] BYREF
  PVOID v28; // [rsp+60h] [rbp-31h] BYREF
  _BYTE Buffer[24]; // [rsp+68h] [rbp-29h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-11h] BYREF

  Object = a4;
  v6 = -1073741823;
  SectionRetainHandle = -1073741823;
  v27 = *(_QWORD *)gpxsGlobals;
  GreAcquireSemaphore(v27);
  RtlInitUnicodeStringEx(&DestinationString, SourceString->Buffer);
  v10 = (void **)RtlLookupElementGenericTableAvl(*((PRTL_AVL_TABLE *)gpxsGlobals + 1), Buffer);
  SectionHandle = v10;
  if ( v10 )
  {
    ++*((_DWORD *)v10 + 2);
    SEMOBJ::vUnlock((SEMOBJ *)&v27);
    GreEnterCriticalRegionAndAcquirePushLockShared(SectionHandle + 2);
    GreLeaveCriticalRegionAndReleasePushLockShared(SectionHandle + 2);
    if ( *SectionHandle )
    {
      SectionRetainHandle = Win32OpenSectionByHandle(*SectionHandle, 0xF001Fu, v18, a2 + 4);
      if ( SectionRetainHandle >= 0 )
        goto LABEL_22;
    }
    bUnreferenceNetworkedFontFileNode(SectionHandle);
LABEL_21:
    if ( SectionRetainHandle < 0 )
    {
LABEL_24:
      v6 = SectionRetainHandle;
      goto LABEL_25;
    }
LABEL_22:
    v19 = (*((_DWORD *)a2 + 10) ^ (4 * a5)) & 4;
    a2[7] = SectionHandle;
    *((_DWORD *)a2 + 10) ^= v19;
    if ( ((_DWORD)a2[5] & 4) == 0 )
    {
      ZwClose(a2[6]);
      a2[6] = 0LL;
    }
    goto LABEL_24;
  }
  v12 = 2 * SourceString->Length + 40;
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v28, v12);
  v13 = (char *)v28;
  if ( v28 )
  {
    *((_DWORD *)v28 + 2) = 1;
    *((_QWORD *)v13 + 4) = v13 + 40;
    *((_WORD *)v13 + 13) = SourceString->Length;
    RtlCopyUnicodeString((PUNICODE_STRING)(v13 + 24), SourceString);
    inserted = (void **)RtlInsertElementGenericTableAvl(*((PRTL_AVL_TABLE *)gpxsGlobals + 1), v13, v12, 0LL);
    SectionHandle = inserted;
    if ( inserted )
    {
      inserted[4] = inserted + 5;
      GreInitializePushLock(inserted + 2);
      GreEnterCriticalRegionAndAcquirePushLockExclusive(SectionHandle + 2);
      SEMOBJ::vUnlock((SEMOBJ *)&v27);
      v15 = a2 + 4;
      SectionRetainHandle = ZwWin32CreateSectionRetainHandle(
                              a2 + 4,
                              v16,
                              a3,
                              (union _LARGE_INTEGER *)Object,
                              4u,
                              v21,
                              0LL,
                              v23,
                              v25,
                              SectionHandle);
      if ( SectionRetainHandle < 0 )
      {
        *v15 = 0LL;
        *SectionHandle = 0LL;
      }
      else
      {
        SectionRetainHandle = ZwWin32CreateSection((int)&Object, v17, (int)a3, (int)Object, 2u, v22, a2[6], v24);
        if ( SectionRetainHandle >= 0 )
        {
          if ( !bCopySection(*v15, Object, *((unsigned int *)a2 + 6)) )
            SectionRetainHandle = -1073741823;
          Win32DestroySection(Object);
        }
      }
      GreLeaveCriticalRegionAndReleasePushLockExclusive(SectionHandle + 2);
      if ( SectionRetainHandle < 0 )
      {
        if ( *v15 )
        {
          Win32DestroySection(*v15);
          *v15 = 0LL;
        }
        bUnreferenceNetworkedFontFileNode(SectionHandle);
      }
      MALLOCOBJ::~MALLOCOBJ((MALLOCOBJ *)&v28);
      goto LABEL_21;
    }
    v6 = -1073741801;
  }
  MALLOCOBJ::~MALLOCOBJ((MALLOCOBJ *)&v28);
LABEL_25:
  SEMOBJ::~SEMOBJ((SEMOBJ *)&v27);
  return v6;
}
