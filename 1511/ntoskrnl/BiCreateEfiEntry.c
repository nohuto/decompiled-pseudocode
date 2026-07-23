/*
 * XREFs of BiCreateEfiEntry @ 0x14068FB74
 * Callers:
 *     BiBindEfiEntries @ 0x14068F08C (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x1406901F4 (BiExportBcdObjects.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BcdOpenObject @ 0x1404FCC2C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1404FCD44 (BcdCloseObject.c)
 *     BiSetRegistryValue @ 0x1404FD7D8 (BiSetRegistryValue.c)
 *     BiAddBootEntry @ 0x14068EC20 (BiAddBootEntry.c)
 *     BiCreateBootEntry @ 0x14068F824 (BiCreateBootEntry.c)
 *     BiGetSavedBootEntry @ 0x140690B50 (BiGetSavedBootEntry.c)
 *     BiUpdateEfiEntry @ 0x1406914FC (BiUpdateEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140691660 (BiUpdateObjectReferenceInEfiEntry.c)
 */

__int64 __fastcall BiCreateEfiEntry(void *a1, const GUID *a2)
{
  wchar_t *Buffer; // rdi
  NTSTATUS v5; // eax
  HANDLE v6; // r14
  int SavedBootEntry; // ebx
  unsigned int v8; // eax
  unsigned int v9; // eax
  UNICODE_STRING EntryValue; // [rsp+68h] [rbp+38h] BYREF
  HANDLE BcdObjectHandle; // [rsp+78h] [rbp+48h] BYREF

  Buffer = 0LL;
  EntryValue.Buffer = 0LL;
  v5 = BcdOpenObject(a1, a2 + 1, &BcdObjectHandle);
  v6 = BcdObjectHandle;
  SavedBootEntry = v5;
  if ( v5 < 0 )
    goto LABEL_14;
  if ( (a2[3].Data1 & 2) != 0 )
  {
    SavedBootEntry = BiGetSavedBootEntry(BcdObjectHandle, &EntryValue.Buffer);
    if ( SavedBootEntry >= 0 )
    {
      Buffer = EntryValue.Buffer;
      if ( (a2[3].Data1 & 8) != 0
        || (SavedBootEntry = BiUpdateObjectReferenceInEfiEntry(EntryValue.Buffer, v6), SavedBootEntry >= 0) )
      {
        SavedBootEntry = BiAddBootEntry((PUNICODE_STRING)Buffer, &EntryValue);
        if ( SavedBootEntry >= 0 )
        {
          *((_DWORD *)Buffer + 2) = *(_DWORD *)&EntryValue.Length;
          v8 = *(_DWORD *)&EntryValue.Length;
          a2[3].Data1 |= 1u;
          a2[2].Data1 = v8;
          *(_QWORD *)a2[2].Data4 = Buffer;
          SavedBootEntry = BiSetRegistryValue(
                             v6,
                             L"FirmwareVariable",
                             L"Description",
                             3u,
                             Buffer,
                             *((_DWORD *)Buffer + 1));
          if ( SavedBootEntry >= 0 )
            SavedBootEntry = BiUpdateEfiEntry(a1, a2);
        }
      }
      goto LABEL_14;
    }
LABEL_13:
    Buffer = EntryValue.Buffer;
    goto LABEL_14;
  }
  SavedBootEntry = BiCreateBootEntry(BcdObjectHandle, &EntryValue.Buffer);
  if ( SavedBootEntry < 0 )
    goto LABEL_13;
  Buffer = EntryValue.Buffer;
  SavedBootEntry = BiAddBootEntry((PUNICODE_STRING)EntryValue.Buffer, &EntryValue);
  if ( SavedBootEntry >= 0 )
  {
    *((_DWORD *)Buffer + 2) = *(_DWORD *)&EntryValue.Length;
    v9 = *(_DWORD *)&EntryValue.Length;
    a2[3].Data1 |= 1u;
    a2[2].Data1 = v9;
    *(_QWORD *)a2[2].Data4 = Buffer;
    SavedBootEntry = BiSetRegistryValue(v6, L"FirmwareVariable", L"Description", 3u, Buffer, *((_DWORD *)Buffer + 1));
    if ( SavedBootEntry >= 0 )
      a2[3].Data1 |= 2u;
  }
LABEL_14:
  if ( v6 )
    BcdCloseObject(v6);
  if ( (a2[3].Data1 & 1) == 0 && Buffer )
    ExFreePoolWithTag(Buffer, 0);
  return (unsigned int)SavedBootEntry;
}
