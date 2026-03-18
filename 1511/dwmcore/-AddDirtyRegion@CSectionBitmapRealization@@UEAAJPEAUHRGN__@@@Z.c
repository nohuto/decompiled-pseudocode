/*
 * XREFs of ?AddDirtyRegion@CSectionBitmapRealization@@UEAAJPEAUHRGN__@@@Z @ 0x18015C0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180070DEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CSectionBitmapRealization::AddDirtyRegion(CSectionBitmapRealization *this, HRGN a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // r12
  unsigned int v3; // esi
  struct _RGNDATA *v4; // r14
  int v7; // eax
  unsigned int *v8; // r8
  int v9; // eax
  DWORD nCount; // r12d
  char *Buffer; // r13
  int v12; // eax
  int v13; // r15d
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  struct _RGNDATA *v17; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v18[4]; // [rsp+40h] [rbp-20h] BYREF

  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 65);
  v3 = 0;
  v16 = 0LL;
  v4 = 0LL;
  v17 = 0LL;
  if ( v2 )
  {
    v7 = (**v2)(v2, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, &v16);
    v3 = v7;
    if ( v7 >= 0 )
    {
      if ( a2 == (HRGN)1 || (v9 = HrgnToRgnData(a2, &v17, v8), v4 = v17, v9 < 0) )
      {
        v12 = *((_DWORD *)this + 116);
        Buffer = (char *)v18;
        v18[0] = 0;
        nCount = 1;
        v18[1] = 0;
        v18[2] = v12;
        v18[3] = *((_DWORD *)this + 117);
      }
      else
      {
        nCount = v17->rdh.nCount;
        Buffer = v17->Buffer;
      }
      v13 = 0;
      if ( nCount )
      {
        while ( 1 )
        {
          v14 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v16 + 40LL))(v16, &Buffer[16 * v13]);
          v3 = v14;
          if ( v14 < 0 )
            break;
          if ( ++v13 >= nCount )
            goto LABEL_13;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x99u);
      }
LABEL_13:
      if ( v4 )
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          v4);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x84u);
    }
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return v3;
}
