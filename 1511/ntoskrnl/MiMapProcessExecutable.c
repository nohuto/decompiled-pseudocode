/*
 * XREFs of MiMapProcessExecutable @ 0x1404635E8
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140462718 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiGetPdeAddress @ 0x14001A3B4 (MiGetPdeAddress.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInitializeUserNoAccess @ 0x14046232C (MiInitializeUserNoAccess.c)
 *     MiCfgInitializeProcess @ 0x14046372C (MiCfgInitializeProcess.c)
 *     PsMapSystemDlls @ 0x140464324 (PsMapSystemDlls.c)
 *     MmMapViewOfSection @ 0x1404644F4 (MmMapViewOfSection.c)
 *     MiSessionCreate @ 0x1404FE8CC (MiSessionCreate.c)
 */

__int64 __fastcall MiMapProcessExecutable(__int64 a1, __int64 a2, _BYTE *a3, unsigned __int64 a4)
{
  int v4; // eax
  unsigned __int64 v5; // r14
  int v7; // ebx
  int v9; // ecx
  int v10; // eax
  unsigned __int64 v11; // rcx
  int v12; // ebx
  int v13; // ebp
  unsigned int v14; // edi
  int v15; // eax
  int v16; // eax
  __int64 result; // rax
  int v18; // eax
  unsigned __int64 PdeAddress; // rax
  __int64 v20; // r13
  unsigned __int64 *v21; // r12
  int v22; // r14d
  char v23; // al
  unsigned __int64 v24; // [rsp+50h] [rbp-88h] BYREF
  __int64 v25; // [rsp+58h] [rbp-80h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp-78h]
  __int64 v27; // [rsp+68h] [rbp-70h] BYREF
  _QWORD v28[3]; // [rsp+70h] [rbp-68h] BYREF

  v4 = *(_DWORD *)(a2 + 56);
  v5 = a4;
  v26 = a4;
  v7 = a2;
  if ( (v4 & 0x20) == 0 )
    return 3221225545LL;
  if ( (*(_DWORD *)a3 & 0x80u) == 0 || (result = MiSessionCreate(&v24), (int)result >= 0) )
  {
    v9 = 0;
    if ( (*a3 & 0x10) != 0 )
      v9 = 0x20000000;
    v27 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    v10 = MmMapViewOfSection(v7, a1, (unsigned int)&v24, 0, 0LL, (__int64)&v25, (__int64)&v27, 1, v9, 4);
    v11 = v24;
    v12 = v10;
    *(_QWORD *)(a1 + 960) = v24;
    if ( v10 >= 0 )
    {
      v13 = *(_DWORD *)a3;
      v14 = 0;
      if ( (*(_DWORD *)a3 & 0x10) != 0 )
      {
        PdeAddress = MiGetPdeAddress(v11);
        v20 = 3LL;
        v21 = v28;
        v22 = 3;
        do
        {
          *v21 = PdeAddress;
          PdeAddress = MiGetPteAddress(PdeAddress);
          ++v21;
          --v20;
        }
        while ( v20 );
        while ( 1 )
        {
          v23 = MI_READ_PTE_LOCK_FREE((__int64 *)v28[--v22]);
          if ( (v23 & 1) == 0 )
            break;
          if ( !v22 )
          {
            if ( v23 < 0 )
              goto LABEL_26;
            break;
          }
        }
        *(_DWORD *)a3 = v13 & 0xFFFFFFEF;
LABEL_26:
        v5 = v26;
        if ( (*a3 & 0x30) == 0x30 )
          v14 = 1;
      }
      v15 = PsMapSystemDlls(a1, v14);
      if ( v15 < 0 )
        v12 = v15;
      if ( v12 >= 0 )
      {
        v16 = MiCfgInitializeProcess(a1);
        if ( v16 < 0 )
        {
          return (unsigned int)v16;
        }
        else if ( v5 )
        {
          v18 = MiInitializeUserNoAccess(a1, v5);
          if ( v18 < 0 )
            return (unsigned int)v18;
        }
      }
    }
    return (unsigned int)v12;
  }
  return result;
}
