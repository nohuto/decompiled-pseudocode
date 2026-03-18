/*
 * XREFs of _CheckMenuItem @ 0x14000ABE4
 * Callers:
 *     NtUserCheckMenuItem @ 0x14000A5D0 (NtUserCheckMenuItem.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x14000C04C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     MNLookUpItem @ 0x1400344B8 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

__int64 __fastcall CheckMenuItem(__int64 a1, unsigned int a2, __int16 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebx
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v9, a1);
  v5 = v10;
  if ( !v10 )
    v5 = *(_QWORD *)v9[0];
  v6 = MNLookUpItem(v5, a2, a3 & 0x400, 0LL);
  if ( v6 )
  {
    v7 = *(_DWORD *)(*(_QWORD *)v6 + 4LL) & 8;
    *(_DWORD *)(*(_QWORD *)v6 + 4LL) ^= ((unsigned __int8)a3 ^ *(_BYTE *)(*(_QWORD *)v6 + 4LL) & 8) & 8;
  }
  else
  {
    v7 = -1;
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v9);
  return v7;
}
