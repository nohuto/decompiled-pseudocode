/*
 * XREFs of MiMapProcessExecutable @ 0x14046BCB8
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14046C248 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiGetPdeAddress @ 0x1400847A4 (MiGetPdeAddress.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     PsMapSystemDlls @ 0x14046ACD8 (PsMapSystemDlls.c)
 *     MmMapViewOfSection @ 0x14046AEB8 (MmMapViewOfSection.c)
 *     MiCfgInitializeProcess @ 0x14046BDEC (MiCfgInitializeProcess.c)
 *     MiInitializeUserNoAccess @ 0x1404BF964 (MiInitializeUserNoAccess.c)
 *     MiSessionCreate @ 0x140535B44 (MiSessionCreate.c)
 */

__int64 __fastcall MiMapProcessExecutable(_KPROCESS *a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  unsigned int v8; // eax
  int v9; // eax
  unsigned __int64 v10; // rcx
  int v11; // ebx
  unsigned int v12; // r10d
  int v13; // eax
  int v14; // eax
  __int64 result; // rax
  int v16; // eax
  unsigned __int64 PdeAddress; // rax
  unsigned __int64 *v18; // rdx
  int v19; // r11d
  __int64 v20; // rdx
  __int64 v21; // r8
  char v22; // al
  int v23; // r9d
  unsigned __int64 v24; // [rsp+50h] [rbp-68h] BYREF
  size_t v25; // [rsp+58h] [rbp-60h] BYREF
  __int64 v26; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v27[3]; // [rsp+68h] [rbp-50h] BYREF

  if ( (*(_DWORD *)(a2 + 56) & 0x20) == 0 )
    return 3221225545LL;
  if ( (*(_DWORD *)a3 & 0x80u) == 0 || (result = MiSessionCreate(&v24), (int)result >= 0) )
  {
    v8 = 0;
    if ( (*a3 & 0x10) != 0 )
      v8 = 0x20000000;
    v25 = 0LL;
    v24 = 0LL;
    v26 = 0LL;
    v9 = MmMapViewOfSection(a2, a1, (void **)&v24, 0LL, 0LL, &v26, &v25, 1, v8, 4u);
    v10 = v24;
    v11 = v9;
    a1[1].Affinity.Bitmap[18] = v24;
    if ( v9 >= 0 )
    {
      v12 = 0;
      if ( (*(_DWORD *)a3 & 0x10) != 0 )
      {
        PdeAddress = MiGetPdeAddress(v10);
        v18 = v27;
        do
        {
          *v18 = PdeAddress;
          PdeAddress = MiGetPteAddress(PdeAddress);
          v18 = (unsigned __int64 *)(v20 + 8);
        }
        while ( v21 != 1 );
        while ( 1 )
        {
          v22 = MI_READ_PTE_LOCK_FREE(v27[v19 - 1]);
          if ( (v22 & 1) == 0 )
          {
LABEL_25:
            *(_DWORD *)a3 = v23 & 0xFFFFFFEF;
            goto LABEL_7;
          }
          if ( v22 < 0 )
            break;
          if ( !v19 )
            goto LABEL_25;
        }
        v12 = (v23 & 0x20) != 0;
      }
LABEL_7:
      v13 = PsMapSystemDlls(a1, v12);
      if ( v13 < 0 )
        v11 = v13;
      if ( v11 >= 0 )
      {
        v14 = MiCfgInitializeProcess(a1);
        if ( v14 < 0 )
        {
          return (unsigned int)v14;
        }
        else if ( a4 )
        {
          v16 = MiInitializeUserNoAccess(a1, a4);
          if ( v16 < 0 )
            return (unsigned int)v16;
        }
      }
    }
    return (unsigned int)v11;
  }
  return result;
}
