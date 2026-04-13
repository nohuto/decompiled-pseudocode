/*
 * XREFs of ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180007674
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180007944 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x1800071D4 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     memcmp_0 @ 0x180058FF2 (memcmp_0.c)
 */

unsigned __int8 *__fastcall wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::UsageIndexProperty *a2,
        unsigned __int8 *a3,
        void *a4,
        size_t Size,
        unsigned int a6)
{
  int v6; // r13d
  char v7; // bl
  void *v8; // r14
  _DWORD *v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  char v15; // al
  unsigned __int8 **v16; // r8
  rsize_t v17; // r9
  rsize_t v18; // rdx
  unsigned __int64 v19; // rsi
  size_t v20; // rdi
  __int64 v21; // rax
  unsigned __int8 *v22; // r8
  int v23; // ecx
  unsigned __int8 *v24; // r8
  _DWORD *v25; // rdi
  int v26; // r14d
  unsigned __int8 *v27; // r8
  bool v28; // zf
  char v29; // al
  unsigned __int8 **v30; // r8
  rsize_t v31; // r9
  __int16 v32; // r9
  unsigned __int8 **p_Source; // r8
  rsize_t v34; // r9
  unsigned __int8 *v36; // [rsp+20h] [rbp-50h]
  __int16 v37; // [rsp+28h] [rbp-48h] BYREF
  char v38; // [rsp+2Ah] [rbp-46h]
  int Source; // [rsp+2Ch] [rbp-44h] BYREF
  unsigned __int16 v40; // [rsp+30h] [rbp-40h]
  void *Destination[2]; // [rsp+38h] [rbp-38h]
  __int16 v42; // [rsp+48h] [rbp-28h] BYREF
  char v43; // [rsp+4Ah] [rbp-26h]
  int v44; // [rsp+4Ch] [rbp-24h]
  unsigned __int16 v45; // [rsp+50h] [rbp-20h]
  void *Buf2[2]; // [rsp+58h] [rbp-18h]
  unsigned __int8 *v47; // [rsp+B0h] [rbp+40h] BYREF
  void *Buf1; // [rsp+C8h] [rbp+58h]

  Buf1 = a4;
  v6 = -1;
  v7 = 0;
  v37 = *((_WORD *)this + 3);
  v8 = a4;
  v38 = *((_BYTE *)this + 8);
  Source = 0;
  v40 = 0;
  *(_OWORD *)Destination = 0LL;
  if ( *((_QWORD *)this + 2) )
  {
    v12 = (_DWORD *)((char *)a2 + 4);
    v13 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
    v14 = *((unsigned int *)a2 + 1);
    if ( v14 <= v13 || (_DWORD)v14 == (_DWORD)v13 )
      goto LABEL_9;
    *v12 = v13;
    v15 = *((_BYTE *)a2 + 2);
    if ( v15 == 1 )
    {
      v16 = &v47;
      LOWORD(v47) = *(_WORD *)v12;
      v17 = 2LL;
      v18 = 2LL;
    }
    else
    {
      if ( v15 != 2 )
      {
LABEL_9:
        v19 = (unsigned int)*v12;
        v20 = Size;
        v21 = v19 * *((_QWORD *)this + 2);
        *(_OWORD *)Buf2 = 0LL;
        v44 = 0;
        v45 = 0;
        v36 = &a3[v21];
        v42 = *((_WORD *)this + 3);
        v43 = *((_BYTE *)this + 8);
        if ( v19 )
        {
          do
          {
            v22 = (unsigned __int8 *)*((_QWORD *)this + 4);
            v47 = &a3[(v19 >> 1) * *((_QWORD *)this + 2)];
            wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v42, &v47, v22);
            if ( v20 == v45 )
              v23 = memcmp_0(Buf1, Buf2[1], v20);
            else
              v23 = v20 - v45;
            if ( v23 <= 0 )
            {
              v19 >>= 1;
            }
            else
            {
              a3 = v47;
              v19 += -1LL - (v19 >> 1);
            }
          }
          while ( v19 );
          v8 = Buf1;
        }
        if ( a3 >= v36 )
          return a3;
        v24 = (unsigned __int8 *)*((_QWORD *)this + 4);
        v47 = a3;
        wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v37, &v47, v24);
        if ( v20 == v40 )
          v6 = memcmp_0(v8, Destination[1], v20);
        else
          v6 = v20 - v40;
        goto LABEL_36;
      }
      v17 = 4LL;
      v16 = (unsigned __int8 **)((char *)a2 + 4);
      v18 = 4LL;
    }
    memcpy_s(*((void *const *)a2 + 2), v18, v16, v17);
    goto LABEL_9;
  }
  v25 = (_DWORD *)((char *)a2 + 4);
  v26 = 0;
  if ( !*((_DWORD *)a2 + 1) )
    return a3;
  while ( 1 )
  {
    v27 = (unsigned __int8 *)*((_QWORD *)this + 4);
    v47 = a3;
    if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v37, &v47, v27) )
      break;
    if ( Size == v40 )
      v6 = memcmp_0(Buf1, Destination[1], Size);
    else
      v6 = Size - v40;
    v28 = v6 == 0;
    if ( v6 <= 0 )
      goto LABEL_37;
    a3 = v47;
    if ( (unsigned int)++v26 >= *v25 )
      goto LABEL_36;
  }
  if ( *v25 != v26 )
  {
    v29 = *((_BYTE *)a2 + 2);
    *v25 = v26;
    if ( v29 == 1 )
    {
      LOWORD(v47) = v26;
      v30 = &v47;
      v31 = 2LL;
LABEL_35:
      memcpy_s(*((void *const *)a2 + 2), v31, v30, v31);
      goto LABEL_36;
    }
    if ( v29 == 2 )
    {
      v31 = 4LL;
      v30 = (unsigned __int8 **)v25;
      goto LABEL_35;
    }
  }
LABEL_36:
  v28 = v6 == 0;
LABEL_37:
  if ( v28 )
  {
    if ( v38 )
    {
      v32 = Source + a6;
      if ( Source != Source + a6 )
      {
        Source += a6;
        if ( v38 == 1 )
        {
          LOWORD(v47) = v32;
          p_Source = &v47;
          v34 = 2LL;
LABEL_44:
          memcpy_s(Destination[0], v34, p_Source, v34);
          goto LABEL_46;
        }
        if ( v38 == 2 )
        {
          v34 = 4LL;
          p_Source = (unsigned __int8 **)&Source;
          goto LABEL_44;
        }
      }
    }
    else if ( !*((_BYTE *)this + 56) )
    {
LABEL_47:
      *((_BYTE *)this + 56) = v7;
      return 0LL;
    }
LABEL_46:
    v7 = 1;
    goto LABEL_47;
  }
  return a3;
}
