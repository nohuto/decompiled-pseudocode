/*
 * XREFs of ?AddDirtyRegion@CSectionBitmapRealization@@UEAAJPEAUHRGN__@@@Z @ 0x18018E5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18009BAEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSectionBitmapRealization::AddDirtyRegion(CSectionBitmapRealization *this, HRGN a2)
{
  unsigned int v2; // edi
  struct _RGNDATA *v3; // rbx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  int v7; // eax
  unsigned int *v8; // r8
  int v9; // eax
  DWORD nCount; // r14d
  char *Buffer; // r15
  int v12; // eax
  int v13; // esi
  int v14; // eax
  struct _RGNDATA *v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v18[4]; // [rsp+40h] [rbp-20h] BYREF

  v2 = 0;
  v3 = 0LL;
  v17 = 0LL;
  v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 60);
  v16 = 0LL;
  if ( v5 )
  {
    v7 = (**v5)(v5, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, &v17);
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x82u);
    }
    else
    {
      if ( a2 == (HRGN)1 || (v9 = HrgnToRgnData(a2, &v16, v8), v3 = v16, v9 < 0) )
      {
        v12 = *((_DWORD *)this + 106);
        Buffer = (char *)v18;
        v18[0] = 0;
        nCount = 1;
        v18[1] = 0;
        v18[2] = v12;
        v18[3] = *((_DWORD *)this + 107);
      }
      else
      {
        nCount = v16->rdh.nCount;
        Buffer = v16->Buffer;
      }
      v13 = 0;
      if ( nCount )
      {
        while ( 1 )
        {
          v14 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 40LL))(v17, &Buffer[16 * v13]);
          v2 = v14;
          if ( v14 < 0 )
            break;
          if ( ++v13 >= nCount )
            goto LABEL_13;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x97u);
      }
    }
LABEL_13:
    if ( v3 )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v3);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v2;
}
