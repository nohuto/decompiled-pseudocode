/*
 * XREFs of itrp_IDefPatch @ 0x1C02DD490
 * Callers:
 *     <none>
 * Callees:
 *     InvokeInterpreter @ 0x1C00EE7E4 (InvokeInterpreter.c)
 *     itrp_FindIDef @ 0x1C02DD270 (itrp_FindIDef.c)
 */

__int64 __fastcall itrp_IDefPatch(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  __int64 IDef; // rax
  int *v6; // r9
  unsigned __int8 v7; // al
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r10
  bool v11; // zf
  int v12; // eax
  __int16 v13; // ax
  __int64 result; // rax
  unsigned __int64 v15; // [rsp+20h] [rbp-18h] BYREF
  __int16 v16; // [rsp+28h] [rbp-10h]

  v2 = qword_1C0323E88;
  v4 = qword_1C0323E90;
  IDef = itrp_FindIDef(a2);
  v6 = (int *)IDef;
  if ( !IDef )
  {
    dword_1C0323E80 = 4353;
    return v2;
  }
  v7 = *(_BYTE *)(IDef + 6);
  if ( v7 >= 2u )
  {
    dword_1C0323E80 = 4373;
    return v2;
  }
  v8 = *(_QWORD *)(qword_1C0323E30 + 16LL * v7 + 200);
  v9 = v8 + *v6;
  if ( v9 < v8
    || (v10 = v9 + *((unsigned __int16 *)v6 + 2), v10 > v8 + *(unsigned int *)(qword_1C0323E30 + 16 * (v7 + 13LL)))
    || v10 < v9 )
  {
    dword_1C0323E80 = 4363;
    return v2;
  }
  v11 = dword_1C0323E9C == 1;
  v12 = --dword_1C0323E9C;
  if ( v11 )
  {
    dword_1C0323E80 = 4358;
    return v2;
  }
  if ( v12 == 50 )
  {
    v13 = *((_WORD *)v6 + 2);
    v15 = v9;
    v16 = v13;
    if ( !(unsigned __int8)EngExpandStackAndCallout(itrp_CALL_helper, &v15, 24576LL, v6) )
    {
      result = qword_1C0323E88;
      dword_1C0323E80 = 4358;
      return result;
    }
  }
  else
  {
    InvokeInterpreter(dword_1C0323E68, v9, v9 + *((unsigned __int16 *)v6 + 2));
  }
  ++dword_1C0323E9C;
  qword_1C0323E88 = v2;
  if ( dword_1C0323E80 )
    a1 = v2;
  qword_1C0323E90 = v4;
  return a1;
}
